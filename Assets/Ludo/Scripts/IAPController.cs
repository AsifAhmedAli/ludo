using UnityEngine;
using System.Collections;
using UnityEngine.Purchasing;
using System;

public class IAPController : MonoBehaviour, IStoreListener
{
    public string SKU_5000_COINS = "pool_5000_coins";
    public string SKU_10000_COINS = "pool_10000_coins";
    public string SKU_25000_COINS = "pool_25000_coins";
    public string SKU_75000_COINS = "pool_75000_coins";
    public string SKU_200000_COINS = "pool_200000_coins";
    public string SKU_500_Gems = "pool_500-gems";
    public string SKU_1000_Gems = "pool_1000-gems";
    public string SKU_2500_Gems = "pool_2500-gems";
    public IStoreController controller;
    private IExtensionProvider extensions;

    // Use this for initialization
    void Start()
    {
        DontDestroyOnLoad(transform.gameObject);
        GameManager.Instance.IAPControl = this;
        var builder = ConfigurationBuilder.Instance(StandardPurchasingModule.Instance());
        builder.AddProduct(SKU_5000_COINS, ProductType.Consumable);
        builder.AddProduct(SKU_10000_COINS, ProductType.Consumable);
        builder.AddProduct(SKU_25000_COINS, ProductType.Consumable);
        builder.AddProduct(SKU_75000_COINS, ProductType.Consumable);
        builder.AddProduct(SKU_200000_COINS, ProductType.Consumable);
        builder.AddProduct(SKU_500_Gems, ProductType.Consumable);
        builder.AddProduct(SKU_1000_Gems, ProductType.Consumable);
        builder.AddProduct(SKU_2500_Gems, ProductType.Consumable);

        UnityPurchasing.Initialize(this, builder);
    }

    public void OnInitialized(IStoreController controller, IExtensionProvider extensions)
    {
        Debug.Log("IAP Initizalization complete!!");
        this.controller = controller;
        this.extensions = extensions;
    }


    public void OnInitializeFailed(InitializationFailureReason error)
    {
        Debug.Log("IAP Initizalization FAILED!! " + error.ToString());
    }

    public void OnInitializeFailed(InitializationFailureReason error, string message)
    {
        Debug.Log("IAP Initizalization FAILED!! " + error.ToString() + " " + message);
    }
    public void OnPurchaseFailed(Product i, PurchaseFailureReason p)
    {
        Debug.Log("IAP purchase FAILED!! " + p.ToString());
    }

    public PurchaseProcessingResult ProcessPurchase(PurchaseEventArgs e)
    {

        if (e.purchasedProduct.definition.id == SKU_5000_COINS)
        {
            GameManager.Instance.playfabManager.addCoinsRequest(5000);
        }
        else if (e.purchasedProduct.definition.id == SKU_10000_COINS)
        {
            GameManager.Instance.playfabManager.addCoinsRequest(10000);
        }
        else if (e.purchasedProduct.definition.id == SKU_25000_COINS)
        {
            GameManager.Instance.playfabManager.addCoinsRequest(25000);
        }
        else if (e.purchasedProduct.definition.id == SKU_75000_COINS)
        {
            GameManager.Instance.playfabManager.addCoinsRequest(75000);
        }
        else if (e.purchasedProduct.definition.id == SKU_200000_COINS)
        {
            GameManager.Instance.playfabManager.addCoinsRequest(200000);
        }
        else if (e.purchasedProduct.definition.id == SKU_500_Gems)
        {
            GameManager.Instance.playfabManager.addGemsRequest(500);
        }
        else if (e.purchasedProduct.definition.id == SKU_1000_Gems)
        {
            GameManager.Instance.playfabManager.addGemsRequest(1000);
        }
        else if (e.purchasedProduct.definition.id == SKU_2500_Gems)
        {
            GameManager.Instance.playfabManager.addGemsRequest(2500);
        }
        return PurchaseProcessingResult.Complete;
    }



    public void OnPurchaseClicked(int productId)
    {
        Debug.Log("Product ID: " + productId);
        if (controller != null)
        {
            if (productId == 1)
            {
                controller.InitiatePurchase(SKU_5000_COINS);
            }
            else if (productId == 2)
            {
                controller.InitiatePurchase(SKU_10000_COINS);
            }
            else if (productId == 3)
            {
                controller.InitiatePurchase(SKU_25000_COINS);
            }
            else if (productId == 4)
            {
                controller.InitiatePurchase(SKU_75000_COINS);
            }
            else if (productId == 5)
            {
                controller.InitiatePurchase(SKU_200000_COINS);
            }
            else if (productId == 7)
            {
                controller.InitiatePurchase(SKU_500_Gems);
            }
            else if (productId == 8)
            {
                controller.InitiatePurchase(SKU_1000_Gems);
            }
            else if (productId == 9)
            {
                controller.InitiatePurchase(SKU_2500_Gems);
            }
        }
    }


}
