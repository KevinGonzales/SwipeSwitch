using UnityEngine;
using System.Collections;

public class Continue : MonoBehaviour 
{
	public GameObject ContinueText,YesText,NoText,Pannel,ImageNotEnoughMoney,ImageCurrency;
	public static Continue current;
	const int cost =25;
	public bool yes ,no,lost ;

	void Awake()
	{
		current = this;
	}

	public void AskToContinue()
	{
		Time.timeScale = 0;
		ContinueText.SetActive (true);
		YesText.SetActive (true);
		NoText.SetActive (true);
		Pannel.SetActive (true);
		ImageCurrency.SetActive (true);
		PauseMenuScript.current.disableDraging ();
	}

	public void ContinueGame()
	{
		if (PlayerPrefs.GetInt ("Currency") >= cost)
		{
			Time.timeScale = 1;
			ContinueText.SetActive (false);
			YesText.SetActive (false);
			NoText.SetActive (false);
			Pannel.SetActive (false);
			ImageCurrency.SetActive (false);
			CurrencyUpdateAfterGame.current.UpdateCurrency (-cost);
			lost = false;
			GameObject.Find("Bought").GetComponent<AudioSource>().Play();
			PauseMenuScript.current.enableDraging ();
		} 
		else
		{
			ImageNotEnoughMoney.SetActive(true);
			GameObject.Find("beepNegative").GetComponent<AudioSource>().Play();
			Invoker.InvokeDelayed(setImageNotEnoughMoneyFalse, 1);
		}
	}
	public void StopGame()
	{
		Time.timeScale = 1;
		Pannel.SetActive (false);
		ContinueText.SetActive (false);
		YesText.SetActive (false);
		NoText.SetActive (false);
		ImageCurrency.SetActive (false);
		GameObject.Find("Impact").GetComponent<AudioSource>().Play();
		lost = false;

		PauseMenuScript.current.enableDraging ();
	}
	public void Yes()
	{
		yes = true;
	}
	public void No()
	{
		no = true;
	}

	void setImageNotEnoughMoneyFalse()
	{
		ImageNotEnoughMoney.SetActive(false);
	}
}