using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System.Collections.Generic;

public class ColorPickerSprites : MonoBehaviour 
{
	Color targetColor;
	Renderer rend;

	void OnEnable() 
	{
		rend = GetComponent<Renderer>();
		targetColor = new Color(Random.value, Random.value, Random.value);
		rend.material.color = targetColor;	
	}
}
