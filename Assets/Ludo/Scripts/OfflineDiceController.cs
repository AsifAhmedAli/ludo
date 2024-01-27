using AssemblyCSharp;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class OfflineDiceController : MonoBehaviour
{
    public Sprite[] diceValueSprites;
    public GameObject arrowObject;
    public GameObject diceValueObject;
    public GameObject diceAnim;

    // Use this for initialization
    public bool isMyDice = false;
    public GameObject LudoController;
    public OfflineGameController controller;
    public int player = 1;
    public Button button;

    public GameObject notInteractable;

    public int steps = 0;
    public bool testMode = false;
    void Start()
    {
        button = GetComponent<Button>();
       // controller = LudoController.GetComponent<OfflineGameController>();

        button.interactable = false;
    }
    public void SetDiceValue()
    {
       // steps = 6;
        Debug.Log("Set dice value called");
        diceValueObject.GetComponent<Image>().sprite = diceValueSprites[steps - 1];
        diceValueObject.SetActive(true);
        diceAnim.SetActive(false);
        controller.gUIController.restartTimer();
        controller.HighlightPawnsToMove(player, steps);

    }
    public void EnableShot()
    {
       
            if (PlayerPrefs.GetInt(StaticStrings.VibrationsKey, 0) == 0)
            {
                Debug.Log("Vibrate");
#if UNITY_ANDROID || UNITY_IOS
                Handheld.Vibrate();
#endif
            }
            else
            {
                Debug.Log("Vibrations OFF");
            }
            controller.gUIController.myTurnSource.Play();
            notInteractable.SetActive(false);
            button.interactable = true;
            arrowObject.SetActive(true);
       
    }


    public void DisableShot()
    {
        notInteractable.SetActive(true);
        button.interactable = false;
        arrowObject.SetActive(false);
    }

    public void EnableDiceShadow()
    {
        notInteractable.SetActive(true);
    }

    public void DisableDiceShadow()
    {
        notInteractable.SetActive(false);
    }
    int aa = 0;
    int bb = 0;
    public void RollDice()
    {
            controller.nextShotPossible = false;
            controller.gUIController.PauseTimers();
            button.interactable = false;
            Debug.Log("Roll Dice");
            // arrowObject.SetActive(false);
            // if (aa % 2 == 0) steps = 6;
            // else steps = 2;
            // aa++;
            if(!testMode)
                steps = Random.Range(1, 7);

            Debug.Log("Value: " + steps);
            RollDiceStart(steps);
    }


    public void RollDiceStart(int steps)
    {
        GetComponent<AudioSource>().Play();
        this.steps = steps;
        diceValueObject.SetActive(false);
        diceAnim.SetActive(true);
        diceAnim.GetComponent<Animator>().Play("RollDiceAnimation");
    }
}
