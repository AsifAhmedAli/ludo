using UnityEngine.SceneManagement;
using UnityEngine;
using TMPro;
using UnityEngine.UI;

public class StartOfflineMode : MonoBehaviour
{
    public TMP_Text text;
    public Toggle toggle;

    public void TogglePlayerCount(int index)
    {
        if(GameDeals.gameDeals.PlayerCount < 4 && index > 0)
            GameDeals.gameDeals.PlayerCount += index;
        else if (GameDeals.gameDeals.PlayerCount > 2 && index < 0)
            GameDeals.gameDeals.PlayerCount += index;
    }
    bool toggleBool = true;
    public void Toggle()
    {
       
        toggleBool = !toggleBool;
        toggle.isOn = toggleBool;
    }
    private void LateUpdate()
    {
        if (this.gameObject.activeSelf)
        {
            text.text = GameDeals.gameDeals.PlayerCount.ToString();
        }
    }
    public void ToggleScene(int index)
    {
        SceneManager.LoadScene(index);
    }
}
