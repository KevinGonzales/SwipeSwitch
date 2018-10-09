using UnityEngine;
using System.Collections;

public class ObsticleMover : MonoBehaviour 
{
	Vector3 moveRight;


	void FixedUpdate () 
	{
		move();
	}
	void move()
	{
		float speed = InstantiateObsticles.current.speed;

		float moveFowardBy = gameObject.transform.position.z;
		moveFowardBy -= speed*Time.deltaTime;

		if(gameObject.transform.position.y > 0 )
		{
			float moveDownBy = gameObject.transform.position.y;
			moveDownBy -= speed*Time.deltaTime;

			moveRight = new Vector3 (gameObject.transform.position.x,moveDownBy,moveFowardBy);
		}
		else if(transform.position.z < 0)
		{
			gameObject.SetActive (false);
		}
		else
		{
			moveRight = new Vector3 (gameObject.transform.position.x,gameObject.transform.position.y,moveFowardBy);
		}
		gameObject.transform.position = moveRight;
	}
}
