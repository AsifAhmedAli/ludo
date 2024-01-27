using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class LeaderboardRecord : MonoBehaviour
{
    public TMP_Text position;
    public Image positionSprite;
    public Color[] colors;
    [SerializeField]
    private TMP_Text Name;
    [SerializeField]
    private TMP_Text Cash;


    public void init(int position,string name,int cash,string role)
    {
        this.position.text = (position+1).ToString();
        if (position == 0)
            positionSprite.color = colors[0];
        else if (position == 1)
            positionSprite.color = colors[1];
        else if (position == 2)
            positionSprite.color = colors[2];
        else
            positionSprite.color = Color.white;

        this.Name.text = "<b>"+name+"</b>";
     //   < b > Tahseen Siddiq </ b >
   //< size = 90 %> Echo
        if (cash > 1000)
            this.Cash.text = (cash / 1000).ToString("D") + "K";
        else if(cash > 1000000)
            this.Cash.text = (cash / 1000000).ToString("D") + "M";
        else
            this.Cash.text = string.Format("{0:0,0}");
        

    }
}
