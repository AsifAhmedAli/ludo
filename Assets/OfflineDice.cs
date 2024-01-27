using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OfflineDice : MonoBehaviour
{
    public OfflineDiceController mainDice;
    public void FinishAnim()
    {
        mainDice.SetDiceValue();
    }
}
