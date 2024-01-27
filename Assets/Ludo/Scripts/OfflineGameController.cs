using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OfflineGameController : MonoBehaviour
{
    public GameObject[] dice;
    public GameObject GameGui;
    public OfflineGUIController gUIController;
    public GameObject[] Pawns1;
    public GameObject[] Pawns2;
    public GameObject[] Pawns3;
    public GameObject[] Pawns4;

    public GameObject gameBoard;
    public GameObject gameBoardScaler;

    //[HideInInspector]
    public int steps = 5;

    public bool nextShotPossible;
    private int SixStepsCount = 0;
    public int finishedPawns = 0;
    private int botCounter = 0;

    public List<OfflinePlayerObject> offlinePlayersList;
    public OfflinePlayerObject offlinePlayer;
    public void HighlightPawnsToMove(int player, int steps)
    {
       
        gUIController.restartTimer();

        offlinePlayer = offlinePlayersList[player - 1];
        GameObject[] pawns = offlinePlayer.pawns;

        this.steps = steps;

        if (steps == 6)
        {
            nextShotPossible = true;
            SixStepsCount++;
            if (SixStepsCount == 3)
            {
                nextShotPossible = false;
                if (GameGui != null)
                {
                    //gUIController.SendFinishTurn();
                    Invoke("sendFinishTurnWithDelay", 1.0f);
                }

                return;
            }
        }
        else
        {
            SixStepsCount = 0;
            nextShotPossible = false;
        }

        bool movePossible = false;
        Debug.Log("<color=green> Pawns Length: </color>"+pawns.Length);
        int possiblePawns = 0;
        GameObject lastPawn = null;
        for (int i = 0; i < pawns.Length; i++)
        {
            Debug.Log("<color=green> Highlighting Pawn.</color>");
            bool possible = pawns[i].GetComponent<OfflinePawnController>().CheckIfCanMove(steps);
            if (possible)
            {
                lastPawn = pawns[i];
                movePossible = true;
                possiblePawns++;
            }
        }

        if (possiblePawns == 1)
        {
                lastPawn.GetComponent<OfflinePawnController>().MakeMove();
                //StartCoroutine(MovePawnWithDelay(lastPawn));
        }
        else
        {
            if (possiblePawns == 2 && lastPawn.GetComponent<OfflinePawnController>().pawnInJoint != null)
            {
              
                    if (!lastPawn.GetComponent<OfflinePawnController>().mainInJoint)
                    {
                        lastPawn.GetComponent<OfflinePawnController>().MakeMove();
                    }
                    else
                    {
                        lastPawn.GetComponent<OfflinePawnController>().pawnInJoint.GetComponent<OfflinePawnController>().MakeMove();
                    }
                    //lastPawn.GetComponent<LudoPawnController>().MakeMove();
               
            }
        }

        if (!movePossible)
        {
            if (GameGui != null)
            {
                Debug.Log("game controller call finish turn");
                gUIController.PauseTimers();
                Invoke("sendFinishTurnWithDelay", 1.0f);
            }
        }
    }

    private IEnumerator MovePawnWithDelay(GameObject lastPawn)
    {
        yield return new WaitForSeconds(1.0f);

        lastPawn.GetComponent<OfflinePawnController>().MakeMove();
    }

    public void sendFinishTurnWithDelay()
    {
        gUIController.SendFinishTurn();
    }
    public void Unhighlight()
    {
        for (int i = 0; i < Pawns1.Length; i++)
        {
            Pawns1[i].GetComponent<OfflinePawnController>().Highlight(false);
        }

        for (int i = 0; i < Pawns2.Length; i++)
        {
            Pawns2[i].GetComponent<OfflinePawnController>().Highlight(false);
        }

        for (int i = 0; i < Pawns3.Length; i++)
        {
            Pawns3[i].GetComponent<OfflinePawnController>().Highlight(false);
        }

        for (int i = 0; i < Pawns4.Length; i++)
        {
            Pawns4[i].GetComponent<OfflinePawnController>().Highlight(false);
        }

    }

    public void setMyTurn(int index)
    {
        SixStepsCount = 0;
        GameManager.Instance.diceShot = false;
        dice[index].GetComponent<OfflineDiceController>().EnableShot();
    }

}
