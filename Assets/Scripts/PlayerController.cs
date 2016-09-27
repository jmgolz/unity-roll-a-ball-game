using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class PlayerController : MonoBehaviour {

	private Rigidbody rb;

	public float	  speed;
	private int 	  numberOfPickupObjects;
	private int 	  count = 0;

	public Text		  countText;
	public Text		  winText;


	void Start(){
		numberOfPickupObjects = GameObject.FindGameObjectsWithTag ("Pick Up").Length;
		rb 					  = GetComponent<Rigidbody> ();
		winText.text		  = "";

		SetCountText ();
	}

	void FixedUpdate(){


//		if (Application.isMobilePlatform) {
			Vector3 movement = Vector3.zero;
			movement.x = Input.acceleration.x;
			movement.z = Input.acceleration.y;

//		} else {
//			float moveHorizontal = Input.GetAxis ("Horizontal");
//			float moveVertical = Input.GetAxis ("Vertical");
//			Vector3 movement = new Vector3 (moveHorizontal, 0.0f, moveVertical);
//
			rb.AddForce (movement * speed);
//		}
	}

	void OnTriggerEnter(Collider other){
		if(other.gameObject.CompareTag("Pick Up")){
			other.gameObject.SetActive(false);
			count++;
			SetCountText ();
		}
	}

	void SetCountText(){
		countText.text = "Count: " + count.ToString ();

		if ( count >= numberOfPickupObjects ) {
			winText.text = "A WINNAR IS U!";
		}
	}

}