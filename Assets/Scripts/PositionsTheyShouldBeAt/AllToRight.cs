using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class AllToRight : MonoBehaviour 
{
	GameObject Botom,Top,BotomMiddle,TopMiddle;
	GameObject Blob,Squares;
	const float MaxPosition = 0.6765001f;
	float botomPosition = MaxPosition ,TopPosition = MaxPosition,BotomMiddlePosition = MaxPosition ,TopMiddlePosition  = MaxPosition;

	// Use this for initialization
	void Start () 
	{
		Botom = GameObject.FindGameObjectWithTag ("Botom");
		Top = GameObject.FindGameObjectWithTag ("Top");
		TopMiddle = GameObject.FindGameObjectWithTag ("TopMiddle");
		BotomMiddle = GameObject.FindGameObjectWithTag ("BotomMiddle");

		Blob = GameObject.Find ("squares");
		Squares = ThingsToDoBeforeGsmeStarts.current.Squares;
	}

	/*void Update()
	{
		if (transform.position.z <= 0 && transform.position.z >= -.5f)
		{
			if(Botom.transform.position.x != botomPosition ||
				Top.transform.position.x != TopPosition || 
				BotomMiddle.transform.position.x != BotomMiddlePosition || 
				TopMiddle.transform.position.x != TopMiddlePosition)
			{
				Continue.current.AskToContinue ();
				if(Continue.current.no == true)
				{
					Continue.current.StopGame ();
					Lost ();
				}
				else if(Continue.current.yes == true)
				{
					Continue.current.ContinueGame ();
					Continue.current.yes = false;
				}
			}
		}
	}                    incase it is to laggy this might be less laggy*/ 

	void FixedUpdate()
	{
		if (transform.position.z <= 0 && transform.position.z >= -.5f)
		{
			if(Botom.transform.position.x != botomPosition ||
				Top.transform.position.x != TopPosition || 
				BotomMiddle.transform.position.x != BotomMiddlePosition || 
				TopMiddle.transform.position.x != TopMiddlePosition)
			{
				Continue.current.lost = true;
			}
		}
	}
	void Update()
	{
		if(Continue.current.lost == true)
		{
			Continue.current.AskToContinue ();
			if(Continue.current.no == true)
			{
				Continue.current.StopGame ();
				Lost ();
			}
			else if(Continue.current.yes == true)
			{
				Continue.current.ContinueGame ();
				Continue.current.yes = false;
			}
		}
	}
	void StoreHighscore(int newHighscore)
	{
		int oldHighscore = PlayerPrefs.GetInt("highscore",0);    
		if (newHighscore > oldHighscore) 
		{
			PlayerPrefs.SetInt ("highscore", newHighscore);
			PlayerPrefs.Save ();
		}
	}
	void GoToLostSceene()
	{
		SceneManager.LoadScene (2);
	}

	void Lost()
	{
		int realScore = Score.current.intScore - 1;
		Blob.SetActive (false);
		Squares.SetActive (true);
		Score.current.textScore.text = realScore.ToString();
		StoreHighscore (realScore);
		PlayerPrefs.SetInt ("currenScore", realScore);
		Invoke ("GoToLostSceene",1.5f);
	}
}
