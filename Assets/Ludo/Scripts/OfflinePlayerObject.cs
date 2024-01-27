using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class OfflinePlayerObject 
{
    public GameObject dice;
    public GameObject[] pawns;
    public GameObject homeLockObjects;
    public bool canEnterHome = false;

    public GameObject timer;
    public bool isActive = true;
    public int finishedPawns = 0;
}
