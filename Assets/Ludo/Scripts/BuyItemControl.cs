
using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using TMPro;

public class BuyItemControl : MonoBehaviour {

    public int index = 1;
    public TMP_Text priceText;

    /// <summary>
    /// Start is called on the frame when a script is enabled just before
    /// any of the Update methods is called the first time.
    /// </summary>
    void Start() {
        if (GameManager.Instance.IAPControl.controller != null) {
            if (this.index == 1) {
                priceText.text = GameManager.Instance.IAPControl.controller.products.WithID(GameManager.Instance.IAPControl.SKU_5000_COINS).metadata.localizedPriceString;
            } else if (this.index == 2) {
                priceText.text = GameManager.Instance.IAPControl.controller.products.WithID(GameManager.Instance.IAPControl.SKU_10000_COINS).metadata.localizedPriceString;
            } else if (this.index == 3) {
                priceText.text = GameManager.Instance.IAPControl.controller.products.WithID(GameManager.Instance.IAPControl.SKU_25000_COINS).metadata.localizedPriceString;
            } else if (this.index == 4) {
                priceText.text = GameManager.Instance.IAPControl.controller.products.WithID(GameManager.Instance.IAPControl.SKU_75000_COINS).metadata.localizedPriceString;
            } else if (this.index == 5) {
                priceText.text = GameManager.Instance.IAPControl.controller.products.WithID(GameManager.Instance.IAPControl.SKU_200000_COINS).metadata.localizedPriceString;
            } else if (this.index == 6) {
                priceText.text = GameManager.Instance.IAPControl.controller.products.WithID(GameManager.Instance.IAPControl.SKU_200000_COINS).metadata.localizedPriceString;
            }
            else if (this.index == 7) {
                priceText.text = GameManager.Instance.IAPControl.controller.products.WithID(GameManager.Instance.IAPControl.SKU_500_Gems).metadata.localizedPriceString;
            } else if (this.index == 8) {
                priceText.text = GameManager.Instance.IAPControl.controller.products.WithID(GameManager.Instance.IAPControl.SKU_1000_Gems).metadata.localizedPriceString;
            }else if (this.index == 8) {
                priceText.text = GameManager.Instance.IAPControl.controller.products.WithID(GameManager.Instance.IAPControl.SKU_2500_Gems).metadata.localizedPriceString;
            }
        }

    }

    public void buyItem() {
      //  GameManager.Instance.IAPControl.OnPurchaseClicked(index);
    }
}
