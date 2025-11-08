use boxcars::{ParserBuilder, Replay, Attribute};
use serde::Serialize;
use std::{collections::HashMap, fs, io::Read};

#[derive(Debug, Serialize, Clone)]
struct Sample {
    t: f32,
    kind: String,
    actor: u32,
    x: f32,
    y: f32,
    z: f32,
}

fn is_ball(name: &str) -> bool {
    name.contains("Ball_TA") || name.contains("Ball_Default")
}

fn is_car(name: &str) -> bool {
    name.contains("Car_TA") || name.contains("Car_Default")
}

fn main() -> Result<(), Box<dyn std::error::Error>> {
    let path = std::env::args().nth(1).expect("usage: rl_extract <file.replay>");
    let mut buf = Vec::new();
    fs::File::open(path)?.read_to_end(&mut buf)?;

    let replay = ParserBuilder::new(&buf)
        .must_parse_network_data()
        .parse()?;

    let frames = replay.network_frames().expect("No network frames present");

    let mut actor_roles: HashMap<u32, String> = HashMap::new();
    let mut out: Vec<Sample> = Vec::new();

    for frame in frames {
        let t = frame.time;

        // Detect new actors
        for added in &frame.actors.added {
            let obj_name = &added.object_name;
            if is_ball(obj_name) {
                actor_roles.insert(added.actor_id.0, "ball".to_string());
            } else if is_car(obj_name) {
                actor_roles.insert(added.actor_id.0, "car".to_string());
            }
        }

        // Track updates
        for updated in &frame.actors.updated {
            let actor_id = updated.actor_id.0;
            let Some(kind) = actor_roles.get(&actor_id) else {
                continue;
            };

            for attr in &updated.attributes {
                if let Attribute::RigidBody(rb) = attr {
                    let p = rb.location;
                    out.push(Sample {
                        t,
                        kind: kind.clone(),
                        actor: actor_id,
                        x: p.x,
                        y: p.y,
                        z: p.z,
                    });
                }
            }
        }
    }

    std::fs::write("samples.json", serde_json::to_vec(&out)?)?;
    println!("Wrote {} samples to samples.json", out.len());
    Ok(())
}
