using UnityEngine;
using System.Collections;

public class VideoReward : PlayAd 
{
	public GameObject imageAskToWatch,no,yes;
	public void AskToWatchAd()
	{
		GameObject.Find("Click").GetComponent<AudioSource>().Play();
		imageAskToWatch.SetActive (true);
		no.SetActive (true);
		yes.SetActive (true);
	}
	public void No()
	{
		GameObject.Find("Click").GetComponent<AudioSource>().Play();
		imageAskToWatch.SetActive (false);
		no.SetActive (false);
		yes.SetActive (false);
	}
	public void Yes()
	{
		showRewardAd ();
		GameObject.Find("Click").GetComponent<AudioSource>().Play();
		imageAskToWatch.SetActive (false);
		no.SetActive (false);
		yes.SetActive (false);
	}
}
