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
    public CarRotation rotation;
    public CarVelocity linear_velocity;
    public CarVelocity angular_velocity;
}

[System.Serializable]
public class CarRotation
{
    // For quaternion format (update positions)
    public float x;
    public float y;
    public float z;
    public float w;
    // For Euler/Yaw-Pitch-Roll format (initial positions, etc)
    public float yaw;
    public float pitch;
    public float roll;
}

[System.Serializable]
public class CarVelocity
{
    public float x;
    public float y;
    public float z;
}

[System.Serializable]
public class CarPlayerInfo
{
    public int team;
    public int score;
    public int goals;
    public int saves;
    public int shots;
    public bool is_bot;
}

[System.Serializable]
public class CarPlayerData
{
    public CarPlayerInfo player_info;
    public List<string> cars_used;
    public int total_positions;
    public int active_positions;
    public List<CarPosition> positions;
}

[System.Serializable]
public class CarReplayInfo
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
    public CarReplayInfo replay_info;
    public int total_players;
    public int total_positions;
    public Dictionary<string, CarPlayerData> players; // this matches your JSON object
}
