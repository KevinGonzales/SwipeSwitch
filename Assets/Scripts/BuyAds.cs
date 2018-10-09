using UnityEngine;
using System.Collections;

public class BuyAds : MonoBehaviour {


	public void buyNoAds()
	{
		IAPManager.Instance.BuyNoAds (); 
	}
}
