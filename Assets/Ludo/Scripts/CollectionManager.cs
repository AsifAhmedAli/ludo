using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class CollectionManager : MonoBehaviour
{
    public GameObject[] Panels;
    public Image headerImage;
    public TMP_Text text;
    public string[] textContent;
    public Button[] btns;
    public Color selectedColor, defaultColor;

    public void OpenIndexPanel(int index)
    {
        foreach(GameObject panel in Panels)
        {
            panel.SetActive(false);
        }
        foreach(Button btn in btns)
        {
            btn.GetComponent<Image>().color = defaultColor;
        }
        text.text = textContent[index];
        if(index != 0)
        {
            headerImage.gameObject.SetActive(false);
        }else headerImage.gameObject.SetActive(true);
        Panels[index].SetActive(true);
        btns[index].GetComponent<Image>().color = selectedColor;
    }
}
