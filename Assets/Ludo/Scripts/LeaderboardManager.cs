using PlayFab.ClientModels;
using PlayFab;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class LeaderboardManager : MonoBehaviour
{

	public LeaderboardRecord prefab;
	public Transform content;

public void SendLeaderboard()
{
		var request = new UpdatePlayerStatisticsRequest
		{
			Statistics = new List<StatisticUpdate>{
		    new StatisticUpdate{
			StatisticName = "Currency", Value = GameManager.Instance.myPlayerData.GetCoins()
	}
}
};
		PlayFabClientAPI.UpdatePlayerStatistics(request, OnLeaderboardUpdate, OnError);
}

    private void OnError(PlayFabError obj)
    {
		Debug.Log("<color = red>Error:</color>" + obj);
    }

    void OnLeaderboardUpdate(UpdatePlayerStatisticsResult result)
	{
		//Hello
		Debug.Log("Result");
	}

	public void GetLeaderboard()
	{
		var request = new GetLeaderboardRequest
		{
			StatisticName = "Currency",
			StartPosition = 0,
			MaxResultsCount = 10
};
		PlayFabClientAPI.GetLeaderboard(request, OnLeaderboardGet, OnError);
	}
	public Dictionary<string, UserDataRecord> data;
	public static string PlayerName = "PlayerName";
	void OnLeaderboardGet(GetLeaderboardResult result)
	{
		 
		foreach (var item in result.Leaderboard)
		{
			Debug.Log(item.Position + " " + item.DisplayName +" "+ item.PlayFabId + " " + item.StatValue);
			LeaderboardRecord leaderboardRecord = Instantiate(prefab, content);
			leaderboardRecord.init(item.Position, item.DisplayName, item.StatValue, "Role");
		}
	}// Start is called before the first frame update
	void Start()
    {
			InvokeRepeating("SendLeaderboard", 4, 4);
			//InvokeRepeating("GetLeaderboard", 4, 4);
		
	}

    // Update is called once per frame
    void LateUpdate()
    {

    }
}
