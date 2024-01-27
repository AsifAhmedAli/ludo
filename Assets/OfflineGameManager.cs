using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;

public class OfflineGameManager : MonoBehaviour
{
    public int numberOfPlayers = 1;
    public TMP_Text text;
    private void Awake()
    {
        if (this.gameObject != null)
            DontDestroyOnLoad(gameObject);
        else
            Destroy(gameObject);
       
    }
    public void Increment()
    {
        if(numberOfPlayers < 3)
            numberOfPlayers+=2;
    }
    public void Decrement()
    {
        if (numberOfPlayers > 1)
            numberOfPlayers -= 2;
    }
    private void LateUpdate()
    {
        text.text = (numberOfPlayers + 1).ToString();
    }
    public void LoadScene()
    {
        SceneManager.LoadScene("OfflineGame");
    }
}
