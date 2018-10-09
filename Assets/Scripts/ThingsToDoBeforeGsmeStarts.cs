using UnityEngine;
using System.Collections;

public class ThingsToDoBeforeGsmeStarts : MonoBehaviour 
{
	public GameObject Squares,Top,TopMiddle,BomoMiddle,Botom,Blob;
	public static ThingsToDoBeforeGsmeStarts current;
	Renderer rend1,rend2,rend3,rend4;
	ColorChangerForBLob script;
	Color newCol;

	// Use this for initialization
	void Awake()
	{
		current = this;
	}
	void Start ()
	{
		Squares.SetActive (false);
		rend1 = Top.GetComponent<Renderer> ();
		rend2 = TopMiddle.GetComponent<Renderer> ();
		rend3 = Botom.GetComponent<Renderer> ();
		rend4 = BomoMiddle.GetComponent<Renderer> ();
		script = Blob.GetComponent<ColorChangerForBLob> ();
		if (PlayerPrefs.GetInt ("ChangesColor", 0) == 0) 
		{
			script.enabled = false;
		} 
		if (ColorUtility.TryParseHtmlString ("#"+ PlayerPrefs.GetString("Color","FFFFFFFF"), out newCol)) 
		{
			rend1.material.color = newCol;
			rend2.material.color = newCol;
			rend3.material.color = newCol;
			rend4.material.color = newCol;
		}

	}
}
