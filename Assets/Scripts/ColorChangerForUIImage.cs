using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class ColorChangerForUIImage : MonoBehaviour 
{
	float timeLeft;
	Color targetColor;
	Image text;

	void Start()
	{
		text = gameObject.GetComponent<Image>();
	}
	void FixedUpdate()
	{
		if (timeLeft <= Time.deltaTime)
		{
			// transition complete
			// assign the target color
			text.color = targetColor;
			// start a new transition
			targetColor = new Color(Random.value, Random.value, Random.value);
			timeLeft = 1.0f;
		}
		else
		{
			// transition in progress
			// calculate interpolated color
			text.color = Color.Lerp(text.color, targetColor, Time.deltaTime / timeLeft);
			// update the timer
			timeLeft -= Time.deltaTime;
		}
	}
}
