using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class OfflineGUIController : MonoBehaviour
{
    public AudioSource WinSound;
    public AudioSource myTurnSource;
    private bool AllPlayersReady = false;

    // LUDO
    public MultiDimensionalGameObject[] PlayersPawns;
    public GameObject[] PlayersDices;
    public GameObject[] HomeLockObjects;
    public GameObject[] PlayerTimers;


    [System.Serializable]
    public class MultiDimensionalGameObject
    {
        public GameObject[] objectsArray;
    }
    // END LUDO

    public GameObject GameFinishWindow;
    public bool FinishWindowActive;

    public GameObject[] Players;
    public GameObject[] ActivePlayers;

    public List<OfflinePlayerObject2> playerObjects;
    //public List<PlayerObject> playerObjects;
    private int myIndex;

    public int currentPlayerIndex;
    public string[] names;
    public List<string> PlayersIDs;
    public Sprite[] avatars;
    private List<OfflinePlayerObject2> playersFinished = new List<OfflinePlayerObject2>();
   // private List<PlayerObject> playersFinished = new List<PlayerObject>();

    private void Start()
    {

        currentPlayerIndex = 0;

        if (FindObjectOfType<OfflineGameManager>().numberOfPlayers == 1)
        {
            Debug.Log("Two Players Game");
            Players[1].SetActive(false);
            Players[3].SetActive(false);
            ActivePlayers = new GameObject[2];
            ActivePlayers[0] = Players[0];
            ActivePlayers[1] = Players[2];

            // LUDO
            for (int i = 0; i < PlayersPawns[1].objectsArray.Length; i++)
            {
                PlayersPawns[1].objectsArray[i].SetActive(false);
            }

            for (int i = 0; i < PlayersPawns[3].objectsArray.Length; i++)
            {
                PlayersPawns[3].objectsArray[i].SetActive(false);
            }

            // END LUDO

        }
        else
        {
            ActivePlayers = Players;
        }
        
      /*  if (GameManager.Instance.mode == MyGameMode.Quick || GameManager.Instance.mode == MyGameMode.Master)
        {
            for (int i = 0; i < GameManager.Instance.playerObjects.Count; i++)
            {
                GameManager.Instance.playerObjects[i].homeLockObjects.SetActive(true);
            }
            GameManager.Instance.needToKillOpponentToEnterHome = true;
        }
        else
        {
            GameManager.Instance.needToKillOpponentToEnterHome = false;
        }*/




        int index = 0;
      //  bool addedMe = false;
       
        //GameManager.Instance.myPlayerIndex = myIndex;
        /* for (int i = 0; ;)
         {
           //  if (i == startPos && addedMe) break;

             if (PlayersIDs.Count == 2)
             {

                 // playerObjects[i].timer = PlayersTimers[2];
                 //  playerObjects[i].ChatBubble = PlayersChatBubbles[2];
                 // playerObjects[i].ChatBubbleText = PlayersChatBubblesText[2];
                 // playerObjects[i].ChatbubbleImage = PlayersChatBubblesImage[2];
                 //   string id = playerObjects[i].id;
                 //   PlayersAvatarsButton[2].GetComponent<Button>().onClick.RemoveAllListeners();
                 //  PlayersAvatarsButton[2].GetComponent<Button>().onClick.AddListener(() => ButtonClick(id));

                 // LUDO
                 playerObjects[i].dice = PlayersDices[2];
                 playerObjects[i].pawns = PlayersPawns[2].objectsArray;

                 for (int k = 0; k < playerObjects[i].pawns.Length; k++)
                 {
                     playerObjects[i].pawns[k].GetComponent<OfflinePawnController>().setPlayerIndex(i);
                 }
                 playerObjects[i].homeLockObjects = HomeLockObjects[2];

                 // END LUDO


             }
             else
             {

                 /* playerObjects[i].timer = PlayersTimers[index];
                  playerObjects[i].ChatBubble = PlayersChatBubbles[index];
                  playerObjects[i].ChatBubbleText = PlayersChatBubblesText[index];
                  playerObjects[i].ChatbubbleImage = PlayersChatBubblesImage[index];

                 // LUDO
                 playerObjects[i].dice = PlayersDices[index];
                 playerObjects[i].pawns = PlayersPawns[index].objectsArray;

                 for (int k = 0; k < playerObjects[i].pawns.Length; k++)
                 {
                     playerObjects[i].pawns[k].GetComponent<OfflinePawnController>().setPlayerIndex(i);
                 }
                 playerObjects[i].homeLockObjects = HomeLockObjects[index];
                 // END LUDO

                 string id = playerObjects[i].id;
                     if (index != 0)
                     {
                         PlayersAvatarsButton[index].GetComponent<Button>().onClick.RemoveAllListeners();
                         PlayersAvatarsButton[index].GetComponent<Button>().onClick.AddListener(() => ButtonClick(id));
                     }

    }

            //  CheckPlayersIfShouldFinishGame();

        }*/

        /* public void CheckPlayersIfShouldFinishGame()
         {
             if (!FinishWindowActive)
             {
                 if ((ActivePlayersInRoom == 1 && !iFinished))
                 {
                     StopAndFinishGame();
                     return;
                 }

                 if (ActivePlayersInRoom == 0)
                 {
                     StopAndFinishGame();
                     return;
                 }

                 if (iFinished && ActivePlayersInRoom == 1 && CheckIfOtherPlayerIsBot())
                 {
                     AddBotToListOfWinners();
                     StopAndFinishGame();
                     return;
                 }

                 if (ActivePlayersInRoom > 1 && iFinished)
                 {
                     TIPButtonObject.SetActive(true);
                 }
             }
         }*/
        SetTurn();
    }
    public int GetCurrentPlayerIndex()
    {
        return currentPlayerIndex;
    }
   

    
    public void StopAndFinishGame()
    {
        //StopTimers();
        SetFinishGame(PhotonNetwork.player.NickName, true);
        ShowGameFinishWindow();
    }
    public void ShowGameFinishWindow()
    {
        if (!FinishWindowActive)
        {

            //  AdsManager.Instance.adsScript.ShowAd(AdLocation.GameFinishWindow);
            FinishWindowActive = true;

          //  List<PlayerObject> otherPlayers = new List<PlayerObject>();

            /*for (int i = 0; i < playerObjects.Count; i++)
            {
                PlayerAvatarController controller = playerObjects[i].AvatarObject.GetComponent<PlayerAvatarController>();
                if (controller.Active && !controller.finished)
                {
                    otherPlayers.Add(playerObjects[i]);
                }
            }

            GameFinishWindow.GetComponent<GameFinishWindowController>().showWindow(playersFinished, otherPlayers, 0, 0);*/
        }
    }

    public void FinishedGame()
    {
        if (GameManager.Instance.currentPlayer.id == PhotonNetwork.player.NickName)
        {
            SetFinishGame(GameManager.Instance.currentPlayer.id, true);
        }
        else
        {
            SetFinishGame(GameManager.Instance.currentPlayer.id, false);
        }
    }

    private void SetFinishGame(string id, bool me)
    {
      //  if (!me || !iFinished)
        {
            Debug.Log("SET FINISH");
           // ActivePlayersInRoom--;

            int index = GetPlayerPosition(id);

            playersFinished.Add(playerObjects[index]);

           // PlayerAvatarController controller = playerObjects[index].AvatarObject.GetComponent<PlayerAvatarController>();
            //controller.Name.GetComponent<TMP_Text>().text = "";
           // controller.Active = false;
            //controller.finished = true;

           // playerObjects[index].dice.SetActive(false);

            int position = playersFinished.Count;
            if (position == 1)
            {
               // controller.Crown.SetActive(true);
            }

           // controller.setPositionSprite(position);
           // CheckPlayersIfShouldFinishGame();
        }
    }

    public int GetPlayerPosition(string id)
    {
        for (int i = 0; i < playerObjects.Count; i++)
        {
           /* if (playerObjects[i].id.Equals(id))
            {
                return i;
            }*/
        }
        return -1;
    }
    public void SendFinishTurn()
    {
        if (!FinishWindowActive)
        {
            //currentPlayerIndex = (myIndex + 1) % playerObjects.Count;
          //  currentPlayerIndex++;
           // if (currentPlayerIndex > 3)
           //     currentPlayerIndex = 0;
            Debug.Log("PLAYER BEFORE: " + currentPlayerIndex);

                setCurrentPlayerIndex(myIndex);

              //  Debug.Log("PLAYER AFTER: " + currentPlayerIndex + " isbot: " + GameManager.Instance.currentPlayer.isBot);

                SetTurn();
                //SetOpponentTurn();

                //GameManager.Instance.miniGame.setOpponentTurn();
        }
    }
    private void setCurrentPlayerIndex(int current)
    {

        while (true)
        {
            Debug.Log("<color=red>Player = </color>"+currentPlayerIndex);
            currentPlayerIndex++;
            if (currentPlayerIndex > 3)
                currentPlayerIndex = 0;
           // current = current + 1;
          //  currentPlayerIndex = (current) % playerObjects.Count;
           // GameManager.Instance.currentPlayer = playerObjects[currentPlayerIndex];
            if (playerObjects[currentPlayerIndex].gameObject.activeSelf) break;
        }

    }
    private void SetTurn()
    {
        Debug.Log("SET TURN CALLED");
        for (int i = 0; i < playerObjects.Count; i++)
        {
            PlayersDices[i].GetComponent<OfflineDiceController>().EnableDiceShadow();
            PlayersDices[i].GetComponent<OfflineDiceController>().DisableShot();
        }

        PlayersDices[currentPlayerIndex].GetComponent<OfflineDiceController>().DisableDiceShadow();
        PlayersDices[currentPlayerIndex].GetComponent<OfflineDiceController>().EnableShot();

        //  GameManager.Instance.currentPlayer = playerObjects[currentPlayerIndex];

        SetMyTurn();
    }

    private void SetMyTurn()
    {
       // GameManager.Instance.isMyTurn = true;

        //if (GameManager.Instance.miniGame != null)
         //   GameManager.Instance.miniGame.setMyTurn();


        StartTimer();
    }

    private void StartTimer()
    {
        for (int i = 0; i < playerObjects.Count; i++)
        {
            if (i == currentPlayerIndex)
            {
                PlayerTimers[currentPlayerIndex].SetActive(true);
            }
            else
            {
                PlayerTimers[i].SetActive(false);
            }
        }
    }
    public void StopTimers()
    {
        for (int i = 0; i < playerObjects.Count; i++)
        {
            PlayerTimers[i].SetActive(false);
        }
    }
    public void PauseTimers()
    {
         PlayerTimers[currentPlayerIndex].GetComponent<UpdatePlayerTimer>().Pause();
    }

    public void restartTimer()
    {
        PlayerTimers[currentPlayerIndex].GetComponent<UpdatePlayerTimer>().restartTimer();
    }
}
