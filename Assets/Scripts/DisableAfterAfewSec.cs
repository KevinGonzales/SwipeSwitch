using UnityEngine;
using System.Collections;

public class DisableAfterAfewSec : MonoBehaviour 
{
	void OnEnable()
	{
		Invoke ("disable",1.5f);
	}
	void disable()
	{
		gameObject.SetActive (false);
	}
}
