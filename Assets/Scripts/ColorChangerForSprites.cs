using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System.Collections.Generic;

public class ColorChangerForSprites : MonoBehaviour 
{
	float timeLeft;
	Color targetColor;
	Renderer rend;

	void Start() 
	{
		rend = GetComponent<Renderer>();
	}
	void FixedUpdate()
	{
		if (timeLeft <= Time.deltaTime)
		{
			// transition complete
			// assign the target color
			rend.material.color = targetColor;
			// start a new transition
			targetColor = new Color(Random.value, Random.value, Random.value);
			timeLeft = 1.0f;
		}
		else
		{
			// transition in progress
			// calculate interpolated color
			rend.material.color = Color.Lerp(rend.material.color, targetColor, Time.deltaTime / timeLeft);

			// update the timer
			timeLeft -= Time.deltaTime;
		}
	}
}
