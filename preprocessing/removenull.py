import json

def replace_nulls(obj):
    if isinstance(obj, dict):
        return {k: replace_nulls(0.0 if v is None else v) for k, v in obj.items()}
    elif isinstance(obj, list):
        return [replace_nulls(x) for x in obj]
    else:
        return obj

# Edit these file names to your actual files:
input_filename = "../unity/Assets/replays/player_positions.json"
output_filename = "player_positions.json"

with open(input_filename, "r", encoding="utf-8") as infile:
    data = json.load(infile)

fixed = replace_nulls(data)

with open(output_filename, "w", encoding="utf-8") as outfile:
    json.dump(fixed, outfile, indent=2)

print("All nulls replaced. Output written to", output_filename)

