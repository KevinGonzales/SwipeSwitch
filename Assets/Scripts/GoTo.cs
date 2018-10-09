using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class GoTo : PlayAd 
{

	public void GoToTheGame()
	{
		GameObject.Find("Click").GetComponent<AudioSource>().Play();
		addToTimesPlayed (1);
		if (PlayerPrefs.GetInt ("timesPlayed") >= 5 && PlayerPrefs.GetInt ("NoAds",0)!= 1) 
		{
			showAd ();
			PlayerPrefs.SetInt ("timesPlayed", 0);
		} 
		else
		{
			SceneManager.LoadScene (1);
		}
		//if (PlayerPrefs.GetInt ("HasNoAdsBeenBought") <= 0)
		//{ add this abouve add to times played and the if when you have a way to putchase no ads
		//}
	}
	public void GoToTheMenu()
	{
		GameObject.Find("Click").GetComponent<AudioSource>().Play();
		SceneManager.LoadScene (0);
	}
	public void GoToRate()
	{
		GameObject.Find("Click").GetComponent<AudioSource>().Play();
		#if UNITY_ANDROID
		Application.OpenURL("");
		#elif UNITY_IPHONE
		Application.OpenURL("");
		#endif
	}
	public void GoToFaceBook()
	{
		GameObject.Find("Click").GetComponent<AudioSource>().Play();
		#if UNITY_ANDROID
		Application.OpenURL("https://www.facebook.com/Howwelife-779474402146156/?fref=ts");
		#elif UNITY_IPHONE
		Application.OpenURL("https://www.facebook.com/Howwelife-779474402146156/?fref=ts");
		#endif
	}
	public void GoToTwitter()
	{
		GameObject.Find("Click").GetComponent<AudioSource>().Play();
		#if UNITY_ANDROID
		Application.OpenURL("https://twitter.com/HowWeIife");
		#elif UNITY_IPHONE
		Application.OpenURL("https://twitter.com/HowWeIife");
		#endif
	}
	public void GoToTheStore()
	{
		GameObject.Find("Click").GetComponent<AudioSource>().Play();
		SceneManager.LoadScene (3);
	}
	public void GoTODailyReward()
	{
		GameObject.Find("Click").GetComponent<AudioSource>().Play();
		SceneManager.LoadScene (4);
	}

	void addToTimesPlayed(int ThisShouldBeone)
	{
		int timesPlayed = PlayerPrefs.GetInt ("timesPlayed", 0);    
		PlayerPrefs.SetInt ("timesPlayed", timesPlayed += ThisShouldBeone);
		PlayerPrefs.Save (); 
	}
}
