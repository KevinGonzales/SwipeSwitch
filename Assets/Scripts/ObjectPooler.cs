using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class ObjectPooler : MonoBehaviour 
{
	public static ObjectPooler current;
	public GameObject[] objectsToInstantiate; // objects that will be instantiated
	//GameObject pooledObject;
	//public int pooledAmount = 10;
	public bool willGrow = false;

	List<GameObject> pooledObjects; // objects already added to list

	void Awake()
	{
		current = this;
	}
	void Start () 
	{
		pooledObjects = new List<GameObject>();
		for (int i = 0 ; i < objectsToInstantiate.Length; i++)
		{
			GameObject obj = (GameObject)Instantiate (objectsToInstantiate[i]);
			obj.SetActive (false);
			pooledObjects.Add(obj);
		}
	}

	public GameObject GetPooledGameObject()
	{
		for(int i = 0; i < pooledObjects.Count; i++ )
		{
			int randomNumber = Random.Range (0,pooledObjects.Count);
			if(!pooledObjects[randomNumber].activeInHierarchy) 
			{
				return pooledObjects[randomNumber];			// was i. If i instead of random number will go in order
			}
		}

		if(willGrow)
		{
			int randomNumber = Random.Range (0,objectsToInstantiate.Length);
			GameObject obj = (GameObject)Instantiate (objectsToInstantiate[randomNumber]);
			pooledObjects.Add (obj);
			return obj;
		}

		return null;
	}
}
