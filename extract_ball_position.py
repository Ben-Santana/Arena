import json
from typing import Optional, Dict, List, Tuple

def load_replay(filepath: str) -> dict:
    with open(filepath, 'r') as f:
        return json.load(f)

def find_ball_actor_id(replay_data: dict) -> Optional[int]:
    names = replay_data.get('names', [])
    for idx, name in enumerate(names):
        if name.startswith('Ball_TA_'):
            return idx
    return None

def extract_ball_positions(replay_data: dict) -> List[Dict]:
    ball_name_id = find_ball_actor_id(replay_data)
    if ball_name_id is None:
        raise ValueError("Could not find ball actor in replay data")
    
    ball_actor_id = None
    ball_positions = []
    frames = replay_data.get('network_frames', {}).get('frames', [])
    
    for frame in frames:
        time = frame.get('time')
        
        for actor in frame.get('new_actors', []):
            if actor.get('name_id') == ball_name_id:
                ball_actor_id = actor.get('actor_id')
                traj = actor.get('initial_trajectory', {})
                location = traj.get('location')
                if location:
                    ball_positions.append({
                        'time': time,
                        'x': location.get('x'),
                        'y': location.get('y'),
                        'z': location.get('z'),
                        'type': 'initial',
                        'frame_type': 'new_actor'
                    })
        
        if ball_actor_id is not None:
            for actor in frame.get('updated_actors', []):
                if actor.get('actor_id') == ball_actor_id:
                    attribute = actor.get('attribute', {})
                    
                    if 'RigidBody' in attribute:
                        rigid_body = attribute['RigidBody']
                        location = rigid_body.get('location')
                        rotation = rigid_body.get('rotation')
                        linear_velocity = rigid_body.get('linear_velocity')
                        angular_velocity = rigid_body.get('angular_velocity')
                        sleeping = rigid_body.get('sleeping')
                        
                        pos_data = {
                            'time': time,
                            'x': location.get('x') if location else None,
                            'y': location.get('y') if location else None,
                            'z': location.get('z') if location else None,
                            'type': 'update',
                            'frame_type': 'rigid_body',
                            'sleeping': sleeping
                        }
                        
                        if rotation:
                            pos_data['rotation'] = rotation
                        if linear_velocity:
                            pos_data['linear_velocity'] = linear_velocity
                        if angular_velocity:
                            pos_data['angular_velocity'] = angular_velocity
                        
                        ball_positions.append(pos_data)
    
    return ball_positions

def get_ball_position_at_time(ball_positions: List[Dict], target_time: float) -> Optional[Dict]:
    if not ball_positions:
        return None
    
    prev_pos = None
    for pos in ball_positions:
        if pos['time'] >= target_time:
            if prev_pos is None:
                return pos
            
            time_diff_prev = abs(prev_pos['time'] - target_time)
            time_diff_curr = abs(pos['time'] - target_time)
            
            return prev_pos if time_diff_prev < time_diff_curr else pos
        prev_pos = pos
    
    return prev_pos

def save_ball_positions_to_json(ball_positions: List[Dict], output_file: str, replay_data: dict):
    output_data = {
        'replay_info': {
            'game_type': replay_data.get('game_type'),
            'total_seconds': replay_data['properties']['TotalSecondsPlayed'],
            'num_frames': replay_data['properties']['NumFrames'],
            'record_fps': replay_data['properties']['RecordFPS'],
            'map_name': replay_data['properties']['MapName']
        },
        'total_positions': len(ball_positions),
        'positions': ball_positions
    }
    
    with open(output_file, 'w') as f:
        json.dump(output_data, f, indent=2)
    
    print(f"Saved {len(ball_positions)} ball positions to {output_file}")

def main():
    replay_file = '/home/aether/Projects/Arena/replays/replay.json'
    output_file = '/home/aether/Projects/Arena/ball_positions.json'
    
    print("Loading replay data...")
    replay_data = load_replay(replay_file)
    
    print("\nReplay Information:")
    print(f"  Game Type: {replay_data['game_type']}")
    print(f"  Total Seconds Played: {replay_data['properties']['TotalSecondsPlayed']}")
    print(f"  Number of Frames: {replay_data['properties']['NumFrames']}")
    print(f"  Record FPS: {replay_data['properties']['RecordFPS']}")
    
    ball_name_id = find_ball_actor_id(replay_data)
    print(f"\nBall Name ID: {ball_name_id}")
    print(f"Ball Actor Name: {replay_data['names'][ball_name_id]}")
    
    print("\nExtracting ball positions...")
    ball_positions = extract_ball_positions(replay_data)
    print(f"Found {len(ball_positions)} ball position updates")
    
    active_positions = [p for p in ball_positions if p.get('sleeping') == False or p.get('type') == 'initial']
    sleeping_positions = [p for p in ball_positions if p.get('sleeping') == True]
    
    print(f"  - Active (moving) positions: {len(active_positions)}")
    print(f"  - Sleeping (stationary) positions: {len(sleeping_positions)}")
    
    print("\nSaving to JSON file...")
    save_ball_positions_to_json(ball_positions, output_file, replay_data)
    
    print("\n" + "="*80)
    print("Sample Ball Positions (first 5 active):")
    print("="*80)
    
    for i, pos in enumerate(active_positions[:5]):
        print(f"\nTime: {pos['time']:.4f}s")
        print(f"  Position: ({pos['x']:.2f}, {pos['y']:.2f}, {pos['z']:.2f})")
        if 'linear_velocity' in pos:
            vel = pos['linear_velocity']
            speed = (vel['x']**2 + vel['y']**2 + vel['z']**2)**0.5
            print(f"  Velocity: ({vel['x']:.2f}, {vel['y']:.2f}, {vel['z']:.2f})")
            print(f"  Speed: {speed:.2f} units/s")
    
    print(f"\n✓ All ball positions exported to: {output_file}")

if __name__ == "__main__":
    main()

