using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class LaunchAskToPurchase : MonoBehaviour
{
	public GameObject pannel,NotEnoughMoney;
	public static LaunchAskToPurchase current;
	const int priceOfColor = 100,priceOfColorChanger = 2000;
	public GameObject red,yellow,green,blue,pink,cyan,lime,purple,highlighter,mintgreen,navyBlue,GreyBlue,brightPink,Mustard,grey,Silver,Brown,lightorange,orange,colorChanger;
	void Awake()
	{
		current = this;
	}

	void Start()
	{
		if(PlayerPrefs.GetInt ("RedBought", 0) == 1)
		{
			red.SetActive (false);
		}
		if(PlayerPrefs.GetInt ("YellowBought", 0) == 1)
		{
			yellow.SetActive (false);
		}
		if(PlayerPrefs.GetInt ("GreenBought", 0) == 1)
		{
			green.SetActive (false);
		}
		if(PlayerPrefs.GetInt ("BlueBought", 0) == 1)
		{
			blue.SetActive (false);
		}
		if(PlayerPrefs.GetInt ("PinkBought", 0) == 1)
		{
			pink.SetActive (false);
		}
		if(PlayerPrefs.GetInt ("CyanBought", 0) == 1)
		{
			cyan.SetActive (false);
		}
		if(PlayerPrefs.GetInt ("LimeBought", 0) == 1)
		{
			lime.SetActive (false);
		}
		if(PlayerPrefs.GetInt ("PurpleBought", 0) == 1)
		{
			purple.SetActive (false);
		}
		if(PlayerPrefs.GetInt ("HighlighterBought", 0) == 1)
		{
			highlighter.SetActive (false);
		}
		if(PlayerPrefs.GetInt ("MintGreenBought", 0) == 1)
		{
			mintgreen.SetActive (false);
		}
		if(PlayerPrefs.GetInt ("NavyBlueBought", 0) == 1)
		{
			navyBlue.SetActive (false);
		}
		if(PlayerPrefs.GetInt ("GreyBlueBought", 0) == 1)
		{
			GreyBlue.SetActive (false);
		}
		if(PlayerPrefs.GetInt ("BrightPinkBought", 0) == 1)
		{
			brightPink.SetActive (false);
		}
		if(PlayerPrefs.GetInt ("MustardBought", 0) == 1)
		{
			Mustard.SetActive (false);
		}

		//
		if(PlayerPrefs.GetInt ("GreyBought", 0) == 1)
		{
			grey.SetActive (false);
		}
		if(PlayerPrefs.GetInt ("SilverBought", 0) == 1)
		{
			Silver.SetActive (false);
		}
		if(PlayerPrefs.GetInt ("BrownBought", 0) == 1)
		{
			Brown.SetActive (false);
		}
		if(PlayerPrefs.GetInt ("LightOrangeBought", 0) == 1)
		{
			lightorange.SetActive (false);
		}
		if(PlayerPrefs.GetInt ("OrangeBought", 0) == 1)
		{
			orange.SetActive (false);
		}
	}

	public void LaunchNotEnoughMoney()
	{
		NotEnoughMoney.SetActive (true);
		pannel.SetActive (true);	
		GameObject.Find("beepNegative").GetComponent<AudioSource>().Play();
		Invoke ("closeNotEnoughMoney",1.5f);
	}
	void closeNotEnoughMoney()
	{
		pannel.SetActive (false);	
		NotEnoughMoney.SetActive (false);
	}
	public void LaunchAskToBuyRed()
	{
		if (PlayerPrefs.GetInt ("Currency") >= priceOfColor)
		{
			int oldCurrency = PlayerPrefs.GetInt ("Currency");    
			PlayerPrefs.SetInt ("Currency", oldCurrency -= priceOfColor);
			PlayerPrefs.SetInt ("RedBought", 1);
			PlayerPrefs.SetString ("Color", "FF5F5FFF");
			PlayerPrefs.SetInt ("ChangesColor", 0);
			red.SetActive (false);
			GameObject.Find("Bought").GetComponent<AudioSource>().Play();
			PlayerPrefs.Save (); 
		}
		else 
		{
			LaunchNotEnoughMoney (); 
		}
	}
	public void LaunchAskToBuyYellow()
	{
		if (PlayerPrefs.GetInt ("Currency") >= priceOfColor)
		{
			int oldCurrency = PlayerPrefs.GetInt ("Currency");    
			PlayerPrefs.SetInt ("Currency", oldCurrency -= priceOfColor);
			PlayerPrefs.SetInt ("YellowBought", 1);
			PlayerPrefs.SetString ("Color","EFFF5FFF");
			PlayerPrefs.SetInt ("ChangesColor",0);
			yellow.SetActive (false);
			GameObject.Find("Bought").GetComponent<AudioSource>().Play();
			PlayerPrefs.Save (); 
		}
		else 
		{
			LaunchNotEnoughMoney (); 
		}
	}
	public void LaunchAskToBuyGreen()
	{
		if (PlayerPrefs.GetInt ("Currency") >= priceOfColor)
		{
			int oldCurrency = PlayerPrefs.GetInt ("Currency");    
			PlayerPrefs.SetInt ("Currency", oldCurrency -= priceOfColor);
			PlayerPrefs.SetInt ("GreenBought", 1);
			PlayerPrefs.SetString ("Color","5FFFA9FF");
			GameObject.Find("Bought").GetComponent<AudioSource>().Play();
			PlayerPrefs.SetInt ("ChangesColor", 0);
			green.SetActive (false);
			PlayerPrefs.Save (); 
		}
		else 
		{
			LaunchNotEnoughMoney (); 
		}
	}
	public void LaunchAskToBuyBlue()
	{
		if (PlayerPrefs.GetInt ("Currency") >= priceOfColor)
		{
			int oldCurrency = PlayerPrefs.GetInt ("Currency");    
			PlayerPrefs.SetInt ("Currency", oldCurrency -= priceOfColor);
			PlayerPrefs.SetInt ("BlueBought", 1);
			PlayerPrefs.SetString ("Color","5F81FFFF");
			PlayerPrefs.SetInt ("ChangesColor", 0);
			blue.SetActive (false);
			PlayerPrefs.Save (); 
			GameObject.Find("Bought").GetComponent<AudioSource>().Play();
		}
		else 
		{
			LaunchNotEnoughMoney (); 
		}
	}
	public void LaunchAskToBuyPink()
	{
		if (PlayerPrefs.GetInt ("Currency") >= priceOfColor)
		{
			int oldCurrency = PlayerPrefs.GetInt ("Currency");    
			PlayerPrefs.SetInt ("Currency", oldCurrency -= priceOfColor);
			PlayerPrefs.SetInt ("PinkBought", 1);
			PlayerPrefs.SetString ("Color","FF5FD3FF");
			PlayerPrefs.SetInt ("ChangesColor", 0);
			pink.SetActive (false);
			PlayerPrefs.Save (); 
			GameObject.Find("Bought").GetComponent<AudioSource>().Play();
		}
		else 
		{
			LaunchNotEnoughMoney (); 
		}
	}
	public void LaunchAskToBuyCyan()
	{
		if (PlayerPrefs.GetInt ("Currency") >= priceOfColor)
		{
			int oldCurrency = PlayerPrefs.GetInt ("Currency");    
			PlayerPrefs.SetInt ("Currency", oldCurrency -= priceOfColor);
			PlayerPrefs.SetInt ("CyanBought", 1);
			PlayerPrefs.SetString ("Color","5FF8FFFF");
			PlayerPrefs.SetInt ("ChangesColor", 0);
			cyan.SetActive (false);
			PlayerPrefs.Save (); 
			GameObject.Find("Bought").GetComponent<AudioSource>().Play();
		}
		else 
		{
			LaunchNotEnoughMoney (); 
		}
	}
	public void LaunchAskToBuyLime()
	{
		if (PlayerPrefs.GetInt ("Currency") >= priceOfColor)
		{
			int oldCurrency = PlayerPrefs.GetInt ("Currency");    
			PlayerPrefs.SetInt ("Currency", oldCurrency -= priceOfColor);
			PlayerPrefs.SetInt ("LimeBought", 1);
			PlayerPrefs.SetString ("Color","99FF5FFF");
			PlayerPrefs.SetInt ("ChangesColor", 0);
			lime.SetActive (false);
			PlayerPrefs.Save (); 
			GameObject.Find("Bought").GetComponent<AudioSource>().Play();
		}
		else 
		{
			LaunchNotEnoughMoney (); 
		}
	}
	public void LaunchAskToBuyPurple()
	{
		if (PlayerPrefs.GetInt ("Currency") >= priceOfColor)
		{
			int oldCurrency = PlayerPrefs.GetInt ("Currency");    
			PlayerPrefs.SetInt ("Currency", oldCurrency -= priceOfColor);
			PlayerPrefs.SetInt ("PurpleBought", 1);
			PlayerPrefs.SetString ("Color","995FFFFF");
			PlayerPrefs.SetInt ("ChangesColor", 0);
			purple.SetActive (false);
			PlayerPrefs.Save (); 
			GameObject.Find("Bought").GetComponent<AudioSource>().Play();
		}
		else 
		{
			LaunchNotEnoughMoney (); 
		}
	}
	public void LaunchAskToBuyHighlighter()
	{
		if (PlayerPrefs.GetInt ("Currency") >= priceOfColor)
		{
			int oldCurrency = PlayerPrefs.GetInt ("Currency");    
			PlayerPrefs.SetInt ("Currency", oldCurrency -= priceOfColor);
			PlayerPrefs.SetInt ("HighlighterBought", 1);
			PlayerPrefs.SetString ("Color","D6FF79FF");
			PlayerPrefs.SetInt ("ChangesColor", 0);
			highlighter.SetActive (false);
			PlayerPrefs.Save (); 
			GameObject.Find("Bought").GetComponent<AudioSource>().Play();
		}
		else 
		{
			LaunchNotEnoughMoney (); 
		}
	}
	public void LaunchAskToBuyMintGreen()
	{
		if (PlayerPrefs.GetInt ("Currency") >= priceOfColor)
		{
			int oldCurrency = PlayerPrefs.GetInt ("Currency");    
			PlayerPrefs.SetInt ("Currency", oldCurrency -= priceOfColor);
			PlayerPrefs.SetInt ("MintGreenBought", 1);
			PlayerPrefs.SetString ("Color","5FFFC3FF");
			PlayerPrefs.SetInt ("ChangesColor", 0);
			mintgreen.SetActive (false);
			PlayerPrefs.Save (); 
			GameObject.Find("Bought").GetComponent<AudioSource>().Play();
		}
		else 
		{
			LaunchNotEnoughMoney (); 
		}
	}
	public void LaunchAskToBuyNavyBlue()
	{
		if (PlayerPrefs.GetInt ("Currency") >= priceOfColor)
		{
			int oldCurrency = PlayerPrefs.GetInt ("Currency");    
			PlayerPrefs.SetInt ("Currency", oldCurrency -= priceOfColor);
			PlayerPrefs.SetInt ("NavyBlueBought", 1);
			PlayerPrefs.SetString ("Color","005B9BFF");
			PlayerPrefs.SetInt ("ChangesColor", 0);
			navyBlue.SetActive (false);
			PlayerPrefs.Save (); 
			GameObject.Find("Bought").GetComponent<AudioSource>().Play();
		}
		else 
		{
			LaunchNotEnoughMoney (); 
		}
	}
	public void LaunchAskToBuyGreyBlue()
	{
		if (PlayerPrefs.GetInt ("Currency") >= priceOfColor)
		{
			int oldCurrency = PlayerPrefs.GetInt ("Currency");    
			PlayerPrefs.SetInt ("Currency", oldCurrency -= priceOfColor);
			PlayerPrefs.SetInt ("GreyBlueBought", 1);
			PlayerPrefs.SetString ("Color","9DB4CAFF");
			PlayerPrefs.SetInt ("ChangesColor", 0);
			GreyBlue.SetActive (false);
			PlayerPrefs.Save (); 
			GameObject.Find("Bought").GetComponent<AudioSource>().Play();
		}
		else 
		{
			LaunchNotEnoughMoney (); 
		}
	}
	public void LaunchAskToBuyBrightPink()
	{
		if (PlayerPrefs.GetInt ("Currency") >= priceOfColor)
		{
			int oldCurrency = PlayerPrefs.GetInt ("Currency");    
			PlayerPrefs.SetInt ("Currency", oldCurrency -= priceOfColor);
			PlayerPrefs.SetInt ("BrightPinkBought", 1);
			PlayerPrefs.SetString ("Color","FF00B8FF");
			PlayerPrefs.SetInt ("ChangesColor", 0);
			brightPink.SetActive (false);
			PlayerPrefs.Save (); 
			GameObject.Find("Bought").GetComponent<AudioSource>().Play();
		}
		else 
		{
			LaunchNotEnoughMoney (); 
		}
	}
	public void LaunchAskToBuyMustard()
	{
		if (PlayerPrefs.GetInt ("Currency") >= priceOfColor)
		{
			int oldCurrency = PlayerPrefs.GetInt ("Currency");    
			PlayerPrefs.SetInt ("Currency", oldCurrency -= priceOfColor);
			PlayerPrefs.SetInt ("MustardBought", 1);
			PlayerPrefs.SetString ("Color","FFE200FF");
			PlayerPrefs.SetInt ("ChangesColor", 0);
			Mustard.SetActive (false);
			PlayerPrefs.Save (); 
			GameObject.Find("Bought").GetComponent<AudioSource>().Play();
		}
		else 
		{
			LaunchNotEnoughMoney (); 
		}
	}
	public void LaunchAskToBuyGrey()		//is now marroon
	{
		if (PlayerPrefs.GetInt ("Currency") >= priceOfColor)
		{
			int oldCurrency = PlayerPrefs.GetInt ("Currency");    
			PlayerPrefs.SetInt ("Currency", oldCurrency -= priceOfColor);
			PlayerPrefs.SetInt ("GreyBought", 1);
			PlayerPrefs.SetString ("Color","832E2EFF");
			PlayerPrefs.SetInt ("ChangesColor", 0);
			grey.SetActive (false);
			PlayerPrefs.Save (); 
			GameObject.Find("Bought").GetComponent<AudioSource>().Play();
		}
		else 
		{
			LaunchNotEnoughMoney (); 
		}
	}
	public void LaunchAskToBuySilver()
	{
		if (PlayerPrefs.GetInt ("Currency") >= priceOfColor)
		{
			int oldCurrency = PlayerPrefs.GetInt ("Currency");    
			PlayerPrefs.SetInt ("Currency", oldCurrency -= priceOfColor);
			PlayerPrefs.SetInt ("SilverBought", 1);
			PlayerPrefs.SetString ("Color","C8C8C8FF");
			PlayerPrefs.SetInt ("ChangesColor", 0);
			Silver.SetActive (false);
			PlayerPrefs.Save (); 
			GameObject.Find("Bought").GetComponent<AudioSource>().Play();
		}
		else 
		{
			LaunchNotEnoughMoney (); 
		}
	}
	public void LaunchAskToBuyBrown()
	{
		if (PlayerPrefs.GetInt ("Currency") >= priceOfColor)
		{
			int oldCurrency = PlayerPrefs.GetInt ("Currency");    
			PlayerPrefs.SetInt ("Currency", oldCurrency -= priceOfColor);
			PlayerPrefs.SetInt ("BrownBought", 1);
			PlayerPrefs.SetString ("Color","A88615FF");
			PlayerPrefs.SetInt ("ChangesColor", 0);
			Brown.SetActive (false);
			PlayerPrefs.Save (); 
			GameObject.Find("Bought").GetComponent<AudioSource>().Play();
		}
		else 
		{
			LaunchNotEnoughMoney (); 
		}
	}
	public void LaunchAskToBuyLightOrange()
	{
		if (PlayerPrefs.GetInt ("Currency") >= priceOfColor)
		{
			int oldCurrency = PlayerPrefs.GetInt ("Currency");    
			PlayerPrefs.SetInt ("Currency", oldCurrency -= priceOfColor);
			PlayerPrefs.SetInt ("LightOrangeBought", 1);
			PlayerPrefs.SetString ("Color","FFB85FFF");
			PlayerPrefs.SetInt ("ChangesColor", 0);
			lightorange.SetActive (false);
			PlayerPrefs.Save (); 
			GameObject.Find("Bought").GetComponent<AudioSource>().Play();
		}
		else 
		{
			LaunchNotEnoughMoney (); 
		}
	}
	public void LaunchAskToBuyOrange()
	{
		if (PlayerPrefs.GetInt ("Currency") >= priceOfColor)
		{
			int oldCurrency = PlayerPrefs.GetInt ("Currency");    
			PlayerPrefs.SetInt ("Currency", oldCurrency -= priceOfColor);
			PlayerPrefs.SetInt ("OrangeBought", 1);
			PlayerPrefs.SetString ("Color","FF8E00FF");
			PlayerPrefs.SetInt ("ChangesColor", 0);
			orange.SetActive (false);
			PlayerPrefs.Save (); 
			GameObject.Find("Bought").GetComponent<AudioSource>().Play();
		}
		else 
		{
			LaunchNotEnoughMoney (); 
		}
	}

	public void LaunchAskToBuyColorChanger()
	{
		if (PlayerPrefs.GetInt ("Currency") >= priceOfColorChanger)
		{
			int oldCurrency = PlayerPrefs.GetInt ("Currency");    
			PlayerPrefs.SetInt ("Currency", oldCurrency -= priceOfColorChanger);
			PlayerPrefs.SetInt ("ColorChangerBought", 1);
			PlayerPrefs.SetString ("Color","FFFFFFFF");
			PlayerPrefs.SetInt ("ChangesColor",1);
			colorChanger.SetActive (false);//set text gone
			PlayerPrefs.Save (); 
			GameObject.Find("Bought").GetComponent<AudioSource>().Play();
		}
		else 
		{
			LaunchNotEnoughMoney (); 
		}
	}
}
