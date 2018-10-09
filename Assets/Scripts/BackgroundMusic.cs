using UnityEngine;
using System.Collections;

public class BackgroundMusic : MonoBehaviour 
{
	static bool AudioBegin = false; 
	void Awake()
	{
		if (!AudioBegin) {
			GetComponent<AudioSource>().Play ();
			DontDestroyOnLoad (gameObject);
			AudioBegin = true;
		} 
	}
	/*void Update () {
		if(Application.loadedLevelName == "Upgraded") //if you dont want audio to play in certain sceence do this
		{
			GetComponent<AudioSource>().Stop();
			AudioBegin = false;
		}
	}*/
}
