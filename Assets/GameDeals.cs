using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameDeals : MonoBehaviour
{
    public static GameDeals gameDeals;

    public int PlayerCount = 4;
    public bool botsEnabled;

    private void Awake()
    {
        DontDestroyOnLoad(this.gameObject);
        gameDeals = this;
    }
   
}
