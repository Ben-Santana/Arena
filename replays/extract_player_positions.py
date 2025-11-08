import json
from typing import Dict, List
from collections import defaultdict

def load_replay(filepath: str) -> dict:
    with open(filepath, 'r') as f:
        return json.load(f)

def map_cars_to_players(replay_data: dict) -> tuple:
    names = replay_data.get('names', [])
    frames = replay_data.get('network_frames', {}).get('frames', [])
    
    pri_to_player = {}
    car_to_pri = {}
    car_actor_to_name = {}
    
    car_name_to_id = {}
    for idx, name in enumerate(names):
        if name.startswith('Car_TA_') and not any(comp in name for comp in ['Component', 'Camera']):
            car_name_to_id[name] = idx
        elif name.startswith('PRI_TA_'):
            pass
    
    for frame in frames:
        for actor in frame.get('new_actors', []):
            name_id = actor.get('name_id')
            actor_id = actor.get('actor_id')
            if name_id < len(names):
                actor_name = names[name_id]
                if actor_name.startswith('Car_TA_') and 'Component' not in actor_name:
                    car_actor_to_name[actor_id] = actor_name
        
        for actor in frame.get('updated_actors', []):
            actor_id = actor.get('actor_id')
            attribute = actor.get('attribute', {})
            
            if actor_id < len(names) and names[actor_id].startswith('PRI_TA'):
                if 'String' in attribute:
                    player_name = attribute['String']
                    if player_name and '|' not in player_name:
                        pri_to_player[actor_id] = player_name
            
            if actor_id in car_actor_to_name:
                if 'ActiveActor' in attribute:
                    linked_actor = attribute['ActiveActor'].get('actor')
                    if linked_actor and actor_id not in car_to_pri:
                        car_to_pri[actor_id] = linked_actor
    
    player_to_cars = defaultdict(list)
    for car_actor_id, pri_actor_id in car_to_pri.items():
        if pri_actor_id in pri_to_player:
            player_name = pri_to_player[pri_actor_id]
            car_name = car_actor_to_name[car_actor_id]
            player_to_cars[player_name].append((car_name, car_actor_id))
    
    return player_to_cars, pri_to_player, car_actor_to_name

def extract_player_positions(replay_data: dict) -> Dict[str, List[Dict]]:
    player_to_cars, pri_to_player, car_actor_to_name = map_cars_to_players(replay_data)
    
    print(f"\nPlayer to Car mapping:")
    print("="*80)
    for player_name, cars in sorted(player_to_cars.items()):
        print(f"{player_name}:")
        for car_name, actor_id in cars:
            print(f"  - {car_name} (Actor ID: {actor_id})")
    
    names = replay_data.get('names', [])
    frames = replay_data.get('network_frames', {}).get('frames', [])
    
    car_positions_by_actor = defaultdict(list)
    
    for frame in frames:
        time = frame.get('time')
        
        for actor in frame.get('new_actors', []):
            name_id = actor.get('name_id')
            actor_id = actor.get('actor_id')
            
            if actor_id in car_actor_to_name:
                car_name = car_actor_to_name[actor_id]
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
                        'car_actor': car_name
                    }
                    if rotation:
                        pos_data['rotation'] = rotation
                    car_positions_by_actor[actor_id].append(pos_data)
        
        for actor in frame.get('updated_actors', []):
            actor_id = actor.get('actor_id')
            attribute = actor.get('attribute', {})
            
            if 'RigidBody' in attribute and actor_id in car_actor_to_name:
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
                        'car_actor': car_actor_to_name[actor_id],
                        'sleeping': sleeping
                    }
                    
                    if rotation:
                        pos_data['rotation'] = rotation
                    if linear_velocity:
                        pos_data['linear_velocity'] = linear_velocity
                    if angular_velocity:
                        pos_data['angular_velocity'] = angular_velocity
                    
                    car_positions_by_actor[actor_id].append(pos_data)
    
    player_positions = {}
    for player_name, cars in player_to_cars.items():
        all_positions = []
        for car_name, car_actor_id in cars:
            all_positions.extend(car_positions_by_actor[car_actor_id])
        
        all_positions.sort(key=lambda x: x['time'])
        player_positions[player_name] = all_positions
    
    return player_positions, player_to_cars

def save_player_positions_to_json(player_positions: Dict[str, List[Dict]], player_to_cars: Dict, output_file: str, replay_data: dict):
    player_stats = replay_data['properties'].get('PlayerStats', [])
    player_info_map = {p['Name']: p for p in player_stats}
    
    total_positions = sum(len(positions) for positions in player_positions.values())
    
    output_data = {
        'replay_info': {
            'game_type': replay_data.get('game_type'),
            'total_seconds': replay_data['properties']['TotalSecondsPlayed'],
            'num_frames': replay_data['properties']['NumFrames'],
            'record_fps': replay_data['properties']['RecordFPS'],
            'map_name': replay_data['properties']['MapName'],
            'team_size': replay_data['properties']['TeamSize']
        },
        'total_players': len(player_positions),
        'total_positions': total_positions,
        'players': {}
    }
    
    for player_name, positions in player_positions.items():
        player_info = player_info_map.get(player_name, {})
        cars_used = [car_name for car_name, _ in player_to_cars.get(player_name, [])]
        
        active_positions = [p for p in positions if p.get('sleeping') == False or p.get('type') == 'initial']
        
        output_data['players'][player_name] = {
            'player_info': {
                'team': player_info.get('Team'),
                'score': player_info.get('Score'),
                'goals': player_info.get('Goals'),
                'saves': player_info.get('Saves'),
                'shots': player_info.get('Shots'),
                'is_bot': player_info.get('bBot')
            },
            'cars_used': cars_used,
            'total_positions': len(positions),
            'active_positions': len(active_positions),
            'positions': positions
        }
    
    with open(output_file, 'w') as f:
        json.dump(output_data, f, indent=2)
    
    print(f"\nSaved {len(player_positions)} players with {total_positions} total position updates to {output_file}")

def main():
    replay_file = '/home/aether/Projects/Arena/replays/replay.json'
    output_file = '/home/aether/Projects/Arena/player_positions.json'
    
    print("Loading replay data...")
    replay_data = load_replay(replay_file)
    
    print("\nReplay Information:")
    print(f"  Game Type: {replay_data['game_type']}")
    print(f"  Total Seconds Played: {replay_data['properties']['TotalSecondsPlayed']}")
    print(f"  Number of Frames: {replay_data['properties']['NumFrames']}")
    
    print("\nExtracting player positions...")
    player_positions, player_to_cars = extract_player_positions(replay_data)
    
    print(f"\n{'='*80}")
    print("Position Summary:")
    print("="*80)
    for player_name, positions in sorted(player_positions.items()):
        active = len([p for p in positions if p.get('sleeping') == False or p.get('type') == 'initial'])
        print(f"{player_name}: {len(positions)} total positions ({active} active)")
    
    total_positions = sum(len(positions) for positions in player_positions.values())
    print(f"\nTotal position updates across all players: {total_positions}")
    
    print("\nSaving to JSON file...")
    save_player_positions_to_json(player_positions, player_to_cars, output_file, replay_data)
    
    print(f"\n✓ All player positions exported to: {output_file}")

if __name__ == "__main__":
    main()
