using UnityEngine;
using System.Collections;
using UnityEngine.UI;
public class SelectColor : MonoBehaviour 
{
	public void Red()
	{
		if (PlayerPrefs.GetInt ("RedBought", 0) == 1)
		{
			PlayerPrefs.SetString ("Color", "FF5F5FFF");
			PlayerPrefs.SetInt ("ChangesColor", 0);
			GameObject.Find("Click").GetComponent<AudioSource>().Play();
			//LaunchAskToPurchase.current.red disable text and then have one that will deisable at start
		} 
		else 
		{
			LaunchAskToPurchase.current.LaunchAskToBuyRed ();//ask to buy
		} 
	}
	public void Yellow()
	{
		if (PlayerPrefs.GetInt ("YellowBought", 0) == 1)
		{
			PlayerPrefs.SetString ("Color","EFFF5FFF");
			PlayerPrefs.SetInt ("ChangesColor", 0);
			//LaunchAskToPurchase.current.red disable text and then have one that will deisable at start
			GameObject.Find("Click").GetComponent<AudioSource>().Play();
		} 
		else 
		{
			LaunchAskToPurchase.current.LaunchAskToBuyYellow ();//ask to buy
		}
	}
	public void Green()
	{
		if (PlayerPrefs.GetInt ("GreenBought", 0) == 1)
		{
			PlayerPrefs.SetString ("Color","5FFFA9FF");
			PlayerPrefs.SetInt ("ChangesColor", 0);
			//LaunchAskToPurchase.current.red disable text and then have one that will deisable at start
			GameObject.Find("Click").GetComponent<AudioSource>().Play();
		} 
		else 
		{
			LaunchAskToPurchase.current.LaunchAskToBuyGreen ();//ask to buy
		}
	}
	public void Blue()
	{
		if (PlayerPrefs.GetInt ("BlueBought", 0) == 1)
		{
			PlayerPrefs.SetString ("Color","5F81FFFF");
			PlayerPrefs.SetInt ("ChangesColor", 0);
			//LaunchAskToPurchase.current.red disable text and then have one that will deisable at start
			GameObject.Find("Click").GetComponent<AudioSource>().Play();
		} 
		else 
		{
			LaunchAskToPurchase.current.LaunchAskToBuyBlue ();//ask to buy
		}
	}
	public void Pink()
	{
		if (PlayerPrefs.GetInt ("PinkBought", 0) == 1)
		{
			PlayerPrefs.SetString ("Color","FF5FD3FF");
			PlayerPrefs.SetInt ("ChangesColor", 0);
			//LaunchAskToPurchase.current.red disable text and then have one that will deisable at start
			GameObject.Find("Click").GetComponent<AudioSource>().Play();
		} 
		else 
		{
			LaunchAskToPurchase.current.LaunchAskToBuyPink ();//ask to buy
		}
	}
	public void White()
	{
		PlayerPrefs.SetString ("Color","FFFFFFFF");
		PlayerPrefs.SetInt ("ChangesColor",0);
		GameObject.Find("Click").GetComponent<AudioSource>().Play();
	}
	public void Cyan()
	{
		if (PlayerPrefs.GetInt ("CyanBought", 0) == 1)
		{
			PlayerPrefs.SetString ("Color","5FF8FFFF");
			PlayerPrefs.SetInt ("ChangesColor", 0);
			GameObject.Find("Click").GetComponent<AudioSource>().Play();
		} 
		else 
		{
			LaunchAskToPurchase.current.LaunchAskToBuyCyan ();
		}
	}
	public void Lime()
	{
		if (PlayerPrefs.GetInt ("LimeBought", 0) == 1)
		{
			PlayerPrefs.SetString ("Color","99FF5FFF");
			PlayerPrefs.SetInt ("ChangesColor", 0);
			GameObject.Find("Click").GetComponent<AudioSource>().Play();
		} 
		else 
		{
			LaunchAskToPurchase.current.LaunchAskToBuyLime ();
		}
	}
	public void Purple()
	{
		if (PlayerPrefs.GetInt ("PurpleBought", 0) == 1)
		{
			PlayerPrefs.SetString ("Color","995FFFFF");
			PlayerPrefs.SetInt ("ChangesColor", 0);
			GameObject.Find("Click").GetComponent<AudioSource>().Play();
		} 
		else 
		{
			LaunchAskToPurchase.current.LaunchAskToBuyPurple ();
		}
	}
	public void LightOrange()
	{
		if (PlayerPrefs.GetInt ("LightOrangeBought", 0) == 1)
		{
			PlayerPrefs.SetString ("Color","FFB85FFF");
			GameObject.Find("Click").GetComponent<AudioSource>().Play();
			PlayerPrefs.SetInt ("ChangesColor", 0);
		} 
		else 
		{
			LaunchAskToPurchase.current.LaunchAskToBuyLightOrange ();
		}
	}
	public void Brown()
	{
		if (PlayerPrefs.GetInt ("BrownBought", 0) == 1)
		{
			PlayerPrefs.SetString ("Color","A88615FF");
			PlayerPrefs.SetInt ("ChangesColor", 0);
			GameObject.Find("Click").GetComponent<AudioSource>().Play();
		} 
		else 
		{
			LaunchAskToPurchase.current.LaunchAskToBuyBrown ();
		}
	}
	public void Silver()
	{
		if (PlayerPrefs.GetInt ("SilverBought", 0) == 1)
		{
			PlayerPrefs.SetString ("Color","C8C8C8FF");
			PlayerPrefs.SetInt ("ChangesColor", 0);
			GameObject.Find("Click").GetComponent<AudioSource>().Play();
		} 
		else 
		{
			LaunchAskToPurchase.current.LaunchAskToBuySilver ();
		}
	}
	public void HighLighter()
	{
		if (PlayerPrefs.GetInt ("HighlighterBought", 0) == 1)
		{
			PlayerPrefs.SetString ("Color","D6FF79FF");
			GameObject.Find("Click").GetComponent<AudioSource>().Play();
			PlayerPrefs.SetInt ("ChangesColor", 0);
		} 
		else 
		{
			LaunchAskToPurchase.current.LaunchAskToBuyHighlighter ();
		}
	}
	public void MintGreen()
	{
		if (PlayerPrefs.GetInt ("MintGreenBought", 0) == 1)
		{
			PlayerPrefs.SetString ("Color","5FFFC3FF");
			GameObject.Find("Click").GetComponent<AudioSource>().Play();
			PlayerPrefs.SetInt ("ChangesColor", 0);
		} 
		else 
		{
			LaunchAskToPurchase.current.LaunchAskToBuyMintGreen ();
		}
	}
	public void NavyBLue()
	{
		if (PlayerPrefs.GetInt ("NavyBlueBought", 0) == 1)
		{
			GameObject.Find("Click").GetComponent<AudioSource>().Play();
			PlayerPrefs.SetString ("Color","005B9BFF");
			PlayerPrefs.SetInt ("ChangesColor", 0);
		} 
		else 
		{
			LaunchAskToPurchase.current.LaunchAskToBuyNavyBlue ();
		}
	}
	public void GreyBLue()
	{
		if (PlayerPrefs.GetInt ("GreyBlueBought", 0) == 1)
		{
			GameObject.Find("Click").GetComponent<AudioSource>().Play();
			PlayerPrefs.SetString ("Color","9DB4CAFF");
			PlayerPrefs.SetInt ("ChangesColor", 0);
		} 
		else 
		{
			LaunchAskToPurchase.current.LaunchAskToBuyGreyBlue ();
		}
	}
	public void BrightPink()
	{
		if (PlayerPrefs.GetInt ("BrightPinkBought", 0) == 1)
		{
			GameObject.Find("Click").GetComponent<AudioSource>().Play();
			PlayerPrefs.SetString ("Color","FF00B8FF");
			PlayerPrefs.SetInt ("ChangesColor", 0);
		} 
		else 
		{
			LaunchAskToPurchase.current.LaunchAskToBuyBrightPink ();
		}
	}
	public void Mustard()
	{
		if (PlayerPrefs.GetInt ("MustardBought", 0) == 1)
		{
			GameObject.Find("Click").GetComponent<AudioSource>().Play();
			PlayerPrefs.SetString ("Color","FFE200FF");
			PlayerPrefs.SetInt ("ChangesColor", 0);
		} 
		else 
		{
			LaunchAskToPurchase.current.LaunchAskToBuyMustard ();
		}
	}
	public void Grey()
	{
		if (PlayerPrefs.GetInt ("GreyBought", 0) == 1)
		{
			GameObject.Find("Click").GetComponent<AudioSource>().Play();
			PlayerPrefs.SetString ("Color","832E2EFF");
			PlayerPrefs.SetInt ("ChangesColor", 0);
		} 
		else 
		{
			LaunchAskToPurchase.current.LaunchAskToBuyGrey ();
		}
	}
	public void Orange()
	{
		if (PlayerPrefs.GetInt ("OrangeBought", 0) == 1)
		{
			GameObject.Find("Click").GetComponent<AudioSource>().Play();
			PlayerPrefs.SetString ("Color","FF8E00FF");
			PlayerPrefs.SetInt ("ChangesColor", 0);
		} 
		else 
		{
			LaunchAskToPurchase.current.LaunchAskToBuyOrange ();
		}
	}
	public void ChangeColor()
	{
		if (PlayerPrefs.GetInt ("ColorChangerBought", 0) == 1)
		{
			GameObject.Find("Click").GetComponent<AudioSource>().Play();
			PlayerPrefs.SetString ("Color","FFFFFFFF");
			PlayerPrefs.SetInt ("ChangesColor",1);
		} 
		else 
		{
			LaunchAskToPurchase.current.LaunchAskToBuyColorChanger ();
		}
	}
}
