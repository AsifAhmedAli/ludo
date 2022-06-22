using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CollectionManager : MonoBehaviour
{
    public GameObject[] Panels;
    public Button[] btns;
    public Color selectedColor, defaultColor;

    public void OpenIndexPanel(int index)
    {
        foreach(GameObject panel in Panels)
        {
            panel.SetActive(false);
        }
        Panels[index].SetActive(true);
        btns[index].GetComponent<Image>().color = selectedColor;
    }
}
