using System.Collections;
using System.Collections.Generic;
using AssemblyCSharp;
using PlayFab.ClientModels;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class PlayerInfoController : MonoBehaviour
{

    public GameObject window;

    public GameObject avatar;
    public GameObject playername;

    public Sprite avatarSprite;

    public GameObject TotalEarningsValue;
    public GameObject CurrentMoneyValue;
    public GameObject GamesWonValue;
    public GameObject WinRateValue;
    public GameObject TwoPlayerWinsValue;
    public GameObject FourPlayerWinsValue;
    public GameObject FourPlayerWinsText;
    public GameObject GamesPlayedValue;
    private int index;
    public Sprite defaultAvatar;

    public GameObject addFriendButton;
    public GameObject editProfileButton;
    public GameObject EditButton;

    void Start()
    {
        if (!StaticStrings.isFourPlayerModeEnabled)
        {
            FourPlayerWinsValue.SetActive(false);
            FourPlayerWinsText.SetActive(false);
        }
        defaultAvatar = avatar.GetComponent<Image>().sprite;
    }

    public void ShowPlayerInfo(int index)
    {
        Debug.Log("Working");
        this.index = index;
        window.SetActive(true);

        if (index == 0)
        {
            FillData(GameManager.Instance.avatarMy, GameManager.Instance.nameMy, GameManager.Instance.myPlayerData);
            addFriendButton.SetActive(false);
            editProfileButton.SetActive(true);
        }
        else
        {
            addFriendButton.SetActive(true);
            editProfileButton.SetActive(false);
            Debug.Log("Player info " + index);

            FillData(GameManager.Instance.playerObjects[index].avatar, GameManager.Instance.playerObjects[index].name, GameManager.Instance.playerObjects[index].data);
        }
    }

    public void ShowPlayerInfo(Sprite avatarSprite, string name, MyPlayerData data)
    {
        editProfileButton.SetActive(false);
        addFriendButton.SetActive(true);

        window.SetActive(true);

        FillData(avatarSprite, name, data);
    }



    public void FillData(Sprite avatarSprite, string name, MyPlayerData data)
    {
       // Debug.Log(data.GetTotalEarnings()+":::"+ GamesPlayedValue.GetComponent<TMP_Text>().text);
        if (avatarSprite == null)
        {
            avatar.GetComponent<Image>().sprite = defaultAvatar;
        }
        else
        {
            avatar.GetComponent<Image>().sprite = avatarSprite;
        }

        playername.GetComponent<TMP_Text>().text = name;
       
        TotalEarningsValue.GetComponent<TMP_Text>().text = data.GetTotalEarnings().ToString();
        GamesPlayedValue.GetComponent<TMP_Text>().text = data.GetPlayedGamesCount().ToString();
        CurrentMoneyValue.GetComponent<TMP_Text>().text = data.GetCoins().ToString();
        GamesWonValue.GetComponent<TMP_Text>().text = (data.GetTwoPlayerWins() + data.GetFourPlayerWins()).ToString();
        float gamesWon = (data.GetTwoPlayerWins() + data.GetFourPlayerWins());
        Debug.Log("WON: " + gamesWon);
        Debug.Log("played: " + data.GetPlayedGamesCount());
        if (data.GetPlayedGamesCount() != 0 && gamesWon != 0)
        {
            WinRateValue.GetComponent<TMP_Text>().text = Mathf.RoundToInt((gamesWon / data.GetPlayedGamesCount() * 100)).ToString() + "%";
        }
        else
        {
            WinRateValue.GetComponent<TMP_Text>().text = "0%";
        }
        TwoPlayerWinsValue.GetComponent<TMP_Text>().text = data.GetTwoPlayerWins().ToString();
        FourPlayerWinsValue.GetComponent<TMP_Text>().text = data.GetFourPlayerWins().ToString();

    }
}
