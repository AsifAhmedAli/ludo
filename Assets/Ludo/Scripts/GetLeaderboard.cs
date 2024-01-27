using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GetLeaderboard : MonoBehaviour
{
    [SerializeField]
    private LeaderboardManager leaderboardManager;
    public Transform content;
   

    private void Start()
    {
        LeaderboardRecord[] lr = content.GetComponentsInChildren<LeaderboardRecord>();
        foreach (LeaderboardRecord obj in lr)
            Destroy(obj.gameObject);
        // leaderboardManager.GetComponent<>
        leaderboardManager.GetLeaderboard();        
    }
}
