using System.Collections;
using System.Collections.Generic;
using System.Globalization;
using TMPro;
using UnityEngine;

public class UpdateGemsFrameValue : MonoBehaviour
{

    
    private int currentValue = 0;
    private TMP_Text text;
    void Start()
    {
        text = GetComponent<TMP_Text>();
        InvokeRepeating("CheckAndUpdateValue", 0.2f, 0.2f);
    }

    private void CheckAndUpdateValue()
    {
        //  Debug.Log("<color=green>Name</color>: "+GameManager.Instance.myPlayerData.GetPlayerName());
        if (currentValue != GameManager.Instance.myPlayerData.GetGems())
        {
            currentValue = GameManager.Instance.myPlayerData.GetGems();
            if (currentValue != 0)
            {
                text.text = GameManager.Instance.myPlayerData.GetGems().ToString("0,0", CultureInfo.InvariantCulture).Replace(',', ' ');
            }
            else
            {
                text.text = "0";
            }
        }
    }
}
