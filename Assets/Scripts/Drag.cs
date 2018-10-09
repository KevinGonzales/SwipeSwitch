using UnityEngine;
using System.Collections;

public class Drag : MonoBehaviour 
{
	const float maxXPosition = 0.6765f;//multiplied .451 by 1.5 because scale is 1.5
	void OnMouseDrag()
	{
		if(PauseMenuScript.current.enableDrag == true)
		{
			float distance_to_screen = Camera.main.WorldToScreenPoint(gameObject.transform.position).z;
			Vector3 pos_move = Camera.main.ScreenToWorldPoint(new Vector3(Input.mousePosition.x, Input.mousePosition.y, distance_to_screen ));
			transform.position = new Vector3( pos_move.x, transform.position.y, pos_move.z );

			if (pos_move.x > maxXPosition ) //dont check position.x check adjusted position
			{
				transform.position = new Vector3 (maxXPosition, transform.position.y, 0);
			}
			else if(pos_move.x < -maxXPosition)
			{
				transform.position = new Vector3 (-maxXPosition, transform.position.y, 0);
			}
			else
			{
				transform.position = new Vector3 (pos_move.x, transform.position.y, 0);
			}
		}
	}

}