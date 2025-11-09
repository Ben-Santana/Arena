import json
from typing import Dict, List

def load_replay(filepath: str) -> dict:
    with open(filepath, 'r') as f:
        return json.load(f)

def find_car_actors(replay_data: dict) -> Dict[str, int]:
    names = replay_data.get('names', [])
    
    car_name_to_id = {}
    for idx, name in enumerate(names):
        if name.startswith('Car_TA_') and not any(comp in name for comp in ['Component', 'Camera']):
            car_name_to_id[name] = idx
    
    return car_name_to_id

def extract_car_positions(replay_data: dict) -> Dict[str, List[Dict]]:
    car_name_to_id = find_car_actors(replay_data)
    names = replay_data.get('names', [])
    
    car_actor_mapping = {}
    car_positions = {}
    
    frames = replay_data.get('network_frames', {}).get('frames', [])
    
    for frame in frames:
        time = frame.get('time')
        
        for actor in frame.get('new_actors', []):
            name_id = actor.get('name_id')
            actor_id = actor.get('actor_id')
            
            if name_id in car_name_to_id.values():
                car_name = names[name_id]
                car_actor_mapping[actor_id] = car_name
                
                if car_name not in car_positions:
                    car_positions[car_name] = []
                
                traj = actor.get('initial_trajectory', {})
                location = traj.get('location')
                rotation = traj.get('rotation')
                
                if location:
                    pos_data = {
                        'time': time,
                        'x': location.get('x'),
                        'y': location.get('y'),
                        'z': location.get('z'),
                        'type': 'initial',
                        'actor_id': actor_id
                    }
                    if rotation:
                        pos_data['rotation'] = rotation
                    car_positions[car_name].append(pos_data)
        
        for actor in frame.get('updated_actors', []):
            actor_id = actor.get('actor_id')
            
            if actor_id in car_actor_mapping:
                car_name = car_actor_mapping[actor_id]
                attribute = actor.get('attribute', {})
                
                if 'RigidBody' in attribute:
                    rigid_body = attribute['RigidBody']
                    location = rigid_body.get('location')
                    rotation = rigid_body.get('rotation')
                    linear_velocity = rigid_body.get('linear_velocity')
                    angular_velocity = rigid_body.get('angular_velocity')
                    sleeping = rigid_body.get('sleeping')
                    
                    if location:
                        pos_data = {
                            'time': time,
                            'x': location.get('x'),
                            'y': location.get('y'),
                            'z': location.get('z'),
                            'type': 'update',
                            'actor_id': actor_id,
                            'sleeping': sleeping
                        }
                        
                        if rotation:
                            pos_data['rotation'] = rotation
                        if linear_velocity:
                            pos_data['linear_velocity'] = linear_velocity
                        if angular_velocity:
                            pos_data['angular_velocity'] = angular_velocity
                        
                        car_positions[car_name].append(pos_data)
    
    return car_positions, car_actor_mapping

def save_car_positions_to_json(car_positions: Dict[str, List[Dict]], car_actor_mapping: Dict, output_file: str, replay_data: dict):
    player_stats = replay_data['properties'].get('PlayerStats', [])
    
    total_positions = sum(len(positions) for positions in car_positions.values())
    
    output_data = {
        'replay_info': {
            'game_type': replay_data.get('game_type'),
            'total_seconds': replay_data['properties']['TotalSecondsPlayed'],
            'num_frames': replay_data['properties']['NumFrames'],
            'record_fps': replay_data['properties']['RecordFPS'],
            'map_name': replay_data['properties']['MapName'],
            'team_size': replay_data['properties']['TeamSize']
        },
        'players': [],
        'total_cars': len(car_positions),
        'total_positions': total_positions,
        'cars': {}
    }
    
    for player in player_stats:
        output_data['players'].append({
            'name': player.get('Name'),
            'team': player.get('Team'),
            'score': player.get('Score'),
            'goals': player.get('Goals'),
            'saves': player.get('Saves'),
            'shots': player.get('Shots'),
            'is_bot': player.get('bBot')
        })
    
    for car_name, positions in car_positions.items():
        active_positions = [p for p in positions if p.get('sleeping') == False or p.get('type') == 'initial']
        sleeping_positions = [p for p in positions if p.get('sleeping') == True]
        
        output_data['cars'][car_name] = {
            'total_positions': len(positions),
            'active_positions': len(active_positions),
            'sleeping_positions': len(sleeping_positions),
            'positions': positions
        }
    
    with open(output_file, 'w') as f:
        json.dump(output_data, f, indent=2)
    
    print(f"Saved {len(car_positions)} cars with {total_positions} total position updates to {output_file}")

def main():
    replay_file = '/home/aether/Projects/Arena/replays/replay.json'
    output_file = '/home/aether/Projects/Arena/car_positions.json'
    
    print("Loading replay data...")
    replay_data = load_replay(replay_file)
    
    print("\nReplay Information:")
    print(f"  Game Type: {replay_data['game_type']}")
    print(f"  Total Seconds Played: {replay_data['properties']['TotalSecondsPlayed']}")
    print(f"  Number of Frames: {replay_data['properties']['NumFrames']}")
    print(f"  Record FPS: {replay_data['properties']['RecordFPS']}")
    
    print("\nFinding car actors...")
    car_name_to_id = find_car_actors(replay_data)
    print(f"Found {len(car_name_to_id)} unique car actors in names array")
    
    print("\nExtracting car positions...")
    car_positions, car_actor_mapping = extract_car_positions(replay_data)
    
    print(f"\nCars with position data: {len(car_positions)}")
    for car_name, positions in sorted(car_positions.items()):
        active = len([p for p in positions if p.get('sleeping') == False or p.get('type') == 'initial'])
        sleeping = len([p for p in positions if p.get('sleeping') == True])
        print(f"  {car_name}: {len(positions)} positions ({active} active, {sleeping} sleeping)")
    
    total_positions = sum(len(positions) for positions in car_positions.values())
    print(f"\nTotal position updates across all cars: {total_positions}")
    
    print("\nSaving to JSON file...")
    save_car_positions_to_json(car_positions, car_actor_mapping, output_file, replay_data)
    
    print(f"\n✓ All car positions exported to: {output_file}")

if __name__ == "__main__":
    main()

