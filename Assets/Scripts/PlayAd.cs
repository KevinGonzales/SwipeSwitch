using UnityEngine;
using UnityEngine.Advertisements;
using System.Collections;

public class PlayAd : MonoBehaviour 
{
	public GameObject tryAgain;
	public void showAd()
	{
		if(Advertisement.IsReady())
		{
			Advertisement.Show("video", new ShowOptions(){resultCallback = HandleAdResult });
		}
	}

	public void showRewardAd()
	{
		if(Advertisement.IsReady())
		{
			Advertisement.Show("rewardedVideo", new ShowOptions(){resultCallback = HandleRewardedAdResult });
		}
	}

	void HandleAdResult(ShowResult result)
	{
		switch(result)
		{
		case ShowResult.Finished: 
			//Debug.Log ("Player finished ad"); //do something
			break;
		case ShowResult.Skipped: 
			//Debug.Log ("Player skiped ad");
			break;
		case ShowResult.Failed: 
			//Debug.Log ("ad failed");
			break;
		}
	}

	void HandleRewardedAdResult(ShowResult result)
	{
		switch(result)
		{
		case ShowResult.Finished: 
			GameObject.Find("Bought").GetComponent<AudioSource>().Play();
			CurrencyUpdateAfterGame.current.UpdateCurrency (25);
			break;
		case ShowResult.Skipped: 
			tryAgain.SetActive (true);
			break;
		case ShowResult.Failed: 
			tryAgain.SetActive (true);
			break;
		}
	}
}
