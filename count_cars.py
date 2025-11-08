import json
from collections import defaultdict

def load_replay(filepath: str) -> dict:
    with open(filepath, 'r') as f:
        return json.load(f)

def analyze_cars(replay_data: dict):
    names = replay_data.get('names', [])
    
    car_names = []
    car_name_ids = []
    
    for idx, name in enumerate(names):
        if name.startswith('Car_TA_') and not any(comp in name for comp in ['Component', 'Camera']):
            car_names.append(name)
            car_name_ids.append(idx)
    
    unique_cars = list(set(car_names))
    
    player_stats = replay_data['properties'].get('PlayerStats', [])
    
    print("="*80)
    print("REPLAY SUMMARY")
    print("="*80)
    print(f"\nGame Type: {replay_data['game_type']}")
    print(f"Team Size: {replay_data['properties']['TeamSize']}")
    print(f"Match Type: {replay_data['properties']['MatchType']}")
    print(f"Map: {replay_data['properties']['MapName']}")
    
    print(f"\n{'='*80}")
    print(f"PLAYERS ({len(player_stats)} total)")
    print("="*80)
    
    team_0_players = []
    team_1_players = []
    
    for player in player_stats:
        team = player.get('Team')
        name = player.get('Name')
        score = player.get('Score')
        goals = player.get('Goals')
        saves = player.get('Saves')
        shots = player.get('Shots')
        is_bot = player.get('bBot')
        
        player_info = {
            'name': name,
            'score': score,
            'goals': goals,
            'saves': saves,
            'shots': shots,
            'is_bot': is_bot
        }
        
        if team == 0:
            team_0_players.append(player_info)
        else:
            team_1_players.append(player_info)
    
    print(f"\nTeam 0 ({len(team_0_players)} players):")
    for p in team_0_players:
        bot_tag = " [BOT]" if p['is_bot'] else ""
        print(f"  - {p['name']}{bot_tag}")
        print(f"    Score: {p['score']} | Goals: {p['goals']} | Saves: {p['saves']} | Shots: {p['shots']}")
    
    print(f"\nTeam 1 ({len(team_1_players)} players):")
    for p in team_1_players:
        bot_tag = " [BOT]" if p['is_bot'] else ""
        print(f"  - {p['name']}{bot_tag}")
        print(f"    Score: {p['score']} | Goals: {p['goals']} | Saves: {p['saves']} | Shots: {p['shots']}")
    
    print(f"\n{'='*80}")
    print(f"CAR ACTORS IN REPLAY")
    print("="*80)
    print(f"\nTotal unique Car_TA actors: {len(unique_cars)}")
    print("\nCar Actor Names:")
    for i, car in enumerate(sorted(unique_cars), 1):
        print(f"  {i}. {car}")
    
    car_actor_mapping = {}
    first_frame = replay_data['network_frames']['frames'][0]
    
    for actor in first_frame['new_actors']:
        name_id = actor.get('name_id')
        actor_id = actor.get('actor_id')
        if name_id in car_name_ids:
            car_name = names[name_id]
            car_actor_mapping[car_name] = actor_id
    
    if car_actor_mapping:
        print(f"\n{'='*80}")
        print(f"CAR ACTOR IDs (in first frame)")
        print("="*80)
        for car_name, actor_id in sorted(car_actor_mapping.items()):
            print(f"  {car_name} -> Actor ID: {actor_id}")
    
    print(f"\n{'='*80}")
    print(f"SUMMARY: This replay contains {len(player_stats)} cars (1 per player)")
    print("="*80)

def main():
    replay_file = '/home/aether/Projects/Arena/replays/replay.json'
    
    print("Loading replay data...")
    replay_data = load_replay(replay_file)
    
    analyze_cars(replay_data)

if __name__ == "__main__":
    main()

