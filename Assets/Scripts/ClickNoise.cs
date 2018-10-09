using UnityEngine;
using System.Collections;

public class ClickNoise : MonoBehaviour 
{

	static bool AudioBegin = false; 
	void Awake()
	{
		if (!AudioBegin) {
			//GetComponent<AudioSource>().Play ();
			DontDestroyOnLoad (gameObject);
			AudioBegin = true;
		} 
	}
}
