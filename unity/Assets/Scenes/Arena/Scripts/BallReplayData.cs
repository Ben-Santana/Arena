using System;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class BallPosition
{
    public float time;
    public float x;
    public float y;
    public float z;
    public string type;
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
public class ReplayData
{
    public int total_positions;
    public List<BallPosition> positions;
}
