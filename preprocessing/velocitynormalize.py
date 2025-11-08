import json

def ensure_velocity_fields(position):
    # Add missing linear_velocity
    if "linear_velocity" not in position or position["linear_velocity"] is None:
        position["linear_velocity"] = {"x": 0.0, "y": 0.0, "z": 0.0}
    # Add missing angular_velocity
    if "angular_velocity" not in position or position["angular_velocity"] is None:
        position["angular_velocity"] = {"x": 0.0, "y": 0.0, "z": 0.0}
    # Recursively fix nulls in nested objects
    for key, value in list(position.items()):
        if isinstance(value, dict):
            position[key] = replace_nulls(value)

def replace_nulls(obj):
    if isinstance(obj, dict):
        return {k: replace_nulls(0.0 if v is None else v) for k, v in obj.items()}
    elif isinstance(obj, list):
        return [replace_nulls(x) for x in obj]
    else:
        return obj

input_filename = "player_positions.json"
output_filename = "FIXEDplayer_positions.json"

with open(input_filename, "r", encoding="utf-8") as infile:
    data = json.load(infile)

# Walk through the tree for every player's positions
for player in data.get("players", {}).values():
    if "positions" in player:
        for pos in player["positions"]:
            ensure_velocity_fields(pos)

# Recursively replace any remaining nulls
data = replace_nulls(data)

with open(output_filename, "w", encoding="utf-8") as outfile:
    json.dump(data, outfile, indent=2)

print("Done! All missing velocity fields added and nulls replaced.")
