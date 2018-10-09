using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;

public class Score : MonoBehaviour 
{
	public static Score current;

	public Text textScore; // refrencing different gamobject in lost sceen than in game sceen
	public int intScore = 0;
	public Text HighScore;

	//wont activate at lost sceen since no on trigger;
	void OnTriggerEnter() 
	{
		intScore += 1;
		textScore.text = intScore.ToString();
		GameObject.Find("ScoreBeeppositive").GetComponent<AudioSource>().Play();
	}
	void Awake () 
	{
		current = this;
	}

	void Start()
	{
		int currentSceen = SceneManager.GetActiveScene().buildIndex; 
		if(  currentSceen == 2)
		{
			textScore.text = PlayerPrefs.GetInt ("currenScore").ToString ();
			HighScore.text = PlayerPrefs.GetInt ("highscore").ToString ();
		}
	}
}
