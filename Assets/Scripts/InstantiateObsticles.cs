using UnityEngine;
using System.Collections;

public class InstantiateObsticles : MonoBehaviour
{
	public static InstantiateObsticles current;
	public float speed = 3f;//was 8
	float spawningTime = 3f;
	bool isSpawning = true;
	float currentTime;

	void FixedUpdate()
	{
		if(isSpawning)
		{
			InstantiatingObsticles ();
			isSpawning = false;
		}
		if ((Time.time - currentTime) > spawningTime)
		{
			isSpawning = true;
		}
	}
	void Awake () 
	{
		current = this;
	}

	/*void Start()
	{
		InvokeRepeating ("InstantiatingObsticles",0,spawningTime);
	}*/

	void InstantiatingObsticles()
	{
		GameObject obj = ObjectPooler.current.GetPooledGameObject();

		if (obj == null) 
		{
			return;
		}

		obj.transform.position = new Vector3 (0,22,30);				//objects spawning position // was 30
		obj.transform.rotation = transform.rotation;

		obj.SetActive (true);

		speed += .5f;
		spawningTime -= .05f; //was .5
		if(spawningTime < 2) //was 1
		{
			spawningTime = 2; //was 1
		}
		if(speed > 17)
		{
			speed = 17f;
		}
		currentTime = Time.time;
	}
		
}
