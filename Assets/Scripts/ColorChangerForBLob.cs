using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class ColorChangerForBLob : MonoBehaviour 
{
	float timeLeft;
	Color targetColor;
	Renderer[] rend;

	void Start() 
	{
		rend = GetComponentsInChildren<Renderer>();
	}
	void FixedUpdate()
	{
		if (timeLeft <= Time.deltaTime)
		{
			// transition complete
			// assign the target color
			rend[0].material.color = targetColor;
			rend[1].material.color = targetColor;
			rend[2].material.color = targetColor;
			rend[3].material.color = targetColor;
			// start a new transition
			targetColor = new Color(Random.value, Random.value, Random.value);
			timeLeft = 1.0f;
		}
		else
		{
			// transition in progress
			// calculate interpolated color
			rend[0].material.color = Color.Lerp(rend[0].material.color, targetColor, Time.deltaTime / timeLeft);
			rend[1].material.color = Color.Lerp(rend[1].material.color, targetColor, Time.deltaTime / timeLeft);
			rend[2].material.color = Color.Lerp(rend[2].material.color, targetColor, Time.deltaTime / timeLeft);
			rend[3].material.color = Color.Lerp(rend[3].material.color, targetColor, Time.deltaTime / timeLeft);
			// update the timer
			timeLeft -= Time.deltaTime;
		}
	}
}
