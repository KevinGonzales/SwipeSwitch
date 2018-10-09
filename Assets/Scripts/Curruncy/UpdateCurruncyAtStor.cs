using UnityEngine;
using System.Collections;
using UnityEngine.UI;


public class UpdateCurruncyAtStor : MonoBehaviour 
{
	public Text curruncy;

	// Use this for initialization
	void FixedUpdate ()			//change to on purchase to save usage
	{
		curruncy.text = PlayerPrefs.GetInt ("Currency").ToString ();
	}
}
