using System;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class CarPosition
{
    public float time;
    public float x;
    public float y;
    public float z;
    public string type;
    public string car_actor;
    public bool sleeping;
    public RotationData rotation;
    public VelocityData linear_velocity;
    public VelocityData angular_velocity;
}

[System.Serializable]
public class RotationData
{
    public float x;
    public float y;
    public float z;
    public float w;
}

[System.Serializable]
public class VelocityData
{
    public float x;
    public float y;
    public float z;
}

[System.Serializable]
public class PlayerInfo
{
    public int team;
    public int score;
    public int goals;
    public int saves;
    public int shots;
    public bool is_bot;
}

[System.Serializable]
public class PlayerData
{
    public PlayerInfo player_info;
    public List<string> cars_used;
    public int total_positions;
    public int active_positions;
    public List<CarPosition> positions;
}

[System.Serializable]
public class ReplayInfo
{
    public string game_type;
    public float total_seconds;
    public int num_frames;
    public float record_fps;
    public string map_name;
    public int team_size;
}

[System.Serializable]
public class CarsReplayData
{
    public ReplayInfo replay_info;
    public int total_players;
    public int total_positions;
    public Dictionary<string, PlayerData> players;
}
