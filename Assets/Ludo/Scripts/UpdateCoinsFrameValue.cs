using System.Collections;
using System.Collections.Generic;
using System.Globalization;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class UpdateCoinsFrameValue : MonoBehaviour
{

    private int currentValue = 0;
    private TMP_Text text;
    // Use this for initialization
    void Start()
    {
        text = GetComponent<TMP_Text>();
        InvokeRepeating("CheckAndUpdateValue", 0.2f, 0.2f);
    }

    private void CheckAndUpdateValue()
    {
      //  Debug.Log("<color=green>Name</color>: "+GameManager.Instance.myPlayerData.GetPlayerName());
        if (currentValue != GameManager.Instance.myPlayerData.GetCoins())
        {
            currentValue = GameManager.Instance.myPlayerData.GetCoins();
            if (currentValue != 0)
            {
                text.text = GameManager.Instance.myPlayerData.GetCoins().ToString("0,0", CultureInfo.InvariantCulture).Replace(',', ' ');
            }
            else
            {
                text.text = "0";
            }
        }
    }

    // Update is called once per frame
    void Update()
    {

    }
}
