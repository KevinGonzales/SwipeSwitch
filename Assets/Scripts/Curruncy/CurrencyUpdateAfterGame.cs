using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class CurrencyUpdateAfterGame : MonoBehaviour
{
	int CurrencyWon;
	public Text textCurruncyWon;
	int oldCurrency;

	public static CurrencyUpdateAfterGame current;

	void Awake()
	{
		current = this;
	}
	void Start ()
	{
		if (Application.loadedLevelName == "Lost") 
		{
			CurrencyWon = PlayerPrefs.GetInt ("currenScore");
			textCurruncyWon.text = PlayerPrefs.GetInt ("currenScore").ToString ();
			UpdateCurrency (CurrencyWon);
		} 
	}

	public void UpdateCurrency(int currencyToAdd)
	{
		oldCurrency = PlayerPrefs.GetInt("Currency");
		PlayerPrefs.SetInt ("Currency", oldCurrency += currencyToAdd);
		PlayerPrefs.Save (); 
	}
}
