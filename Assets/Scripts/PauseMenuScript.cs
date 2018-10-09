using UnityEngine;
using System.Collections;

public class PauseMenuScript : MonoBehaviour
{
	GameObject PauseMenuPannelInstantance;
	GameObject ResumeButtonInstance;
	GameObject TextPause;
	GameObject Squares;
	public bool enableDrag = true;

	public static PauseMenuScript current;

	void Awake()
	{
		current = this;
	}

	void Start()
	{
		PauseMenuPannelInstantance = GameObject.Find ("Panel");	
		ResumeButtonInstance = GameObject.Find ("Resume");	
		TextPause = GameObject.Find ("TextPause");	
		Squares = GameObject.Find("SquaresWhenLost");

		TextPause.SetActive (false);
		PauseMenuPannelInstantance.SetActive (false);
		ResumeButtonInstance.SetActive (false);
	}

	public void enableDraging()
	{
		enableDrag = true;
	}
	public void disableDraging()
	{
		enableDrag = false;
	}
	public void Pauses()
	{
		Time.timeScale = 0;	 

		PauseMenuPannelInstantance.SetActive (true);
		ResumeButtonInstance.SetActive (true);
		TextPause.SetActive (true);

		GameObject.Find("Click").GetComponent<AudioSource>().Play();

		disableDraging();
	}
	public void Resume()
	{
		Time.timeScale = 1;
		PauseMenuPannelInstantance.SetActive (false);
		ResumeButtonInstance.SetActive (false);
		TextPause.SetActive (false);

		GameObject.Find("Click").GetComponent<AudioSource>().Play();

		enableDraging();
	}
}
