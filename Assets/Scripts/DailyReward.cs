using UnityEngine;
using UnityEngine.UI;
using System.Collections;
public class DailyReward : MonoBehaviour 
{
	System.TimeSpan difference;
	System.DateTime oldDate;
	System.DateTime newDate ;

	public Text hours;
	public Text minutes;
	public Text Seconds;
	public GameObject rewardButton;
	public GameObject curruncy;

	// Use this for initialization
	void Start () 
	{
		rewardButton.SetActive (false);
	}
		
	void FixedUpdate ()
	{
		string stringDate = PlayerPrefs.GetString("PlayDate");
		oldDate =  System.DateTime.ParseExact(stringDate, "MM/dd/yyyy HH:mm:ss", null);//.Convert.ToDateTime(stringDate);
		newDate = System.DateTime.Now;
		difference = newDate.Subtract(oldDate);

		hours.text = Mathf.Abs (23 - difference.Hours).ToString() + " :";
		minutes.text = Mathf.Abs (59 - difference.Minutes).ToString() + " :";
		Seconds.text = Mathf.Abs (60 - difference.Seconds).ToString();
		if(difference.Days >= 10) //idea is to make it so that if enough time has passed a collect prize button appears and when clicked gives price. Then evrything else resets and shows time left for next price
		{
			//enable reward button disable rest
			hours.gameObject.SetActive (false);
			minutes.gameObject.SetActive (false);
			Seconds.gameObject.SetActive (false);

			rewardButton.SetActive (true);
		}
	}
	//call tis with the button
	public void getReward()
	{
		rewardButton.SetActive (false);
		hours.gameObject.SetActive (true);
		minutes.gameObject.SetActive (true);
		Seconds.gameObject.SetActive (true);
		curruncy.gameObject.SetActive (true);

		int randomNum = Random.Range (1,25);
		CurrencyUpdateAfterGame.current.UpdateCurrency (randomNum);
		string newStringDate = System.Convert.ToString (newDate);
		PlayerPrefs.SetString ("PlayDate", newStringDate);
		//giveGift();
	}

}
