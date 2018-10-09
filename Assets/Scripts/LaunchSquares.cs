using UnityEngine;
using System.Collections;

public class LaunchSquares : MonoBehaviour 
{
	Rigidbody2D rb;
	float force = 50;
	Vector2 direction;
	float randomNumber;
	// Use this for initialization
	void OnEnable() 
	{
		rb = gameObject.GetComponent<Rigidbody2D> ();
		randomNumber = Random.Range (-3,3);
		direction = new Vector2 (randomNumber, 5);
		rb.AddForce(direction * force);
	}
}
