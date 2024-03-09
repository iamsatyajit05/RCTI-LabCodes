using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveScale : MonoBehaviour {
    public float movementSpeed = 2;
    public float scaleSpeed = 2;
    
    void Start() {}

    void Move() {
        float x = transform.position.x;
        if (x > 5) {
            movementSpeed = -2;
        }
        if (x < -5) {
            movementSpeed = 2;
        }
        transform.Translate(Vector3.right * movementSpeed * Time.deltaTime);
    }

    void Scale() {
        float scale = transform.localScale.x;
        if (scale > 2) {
            scaleSpeed = -1;
        }
        if (scale < 1) {
            scaleSpeed = 1;
        }
        transform.localScale += new Vector3(scaleSpeed * Time.deltaTime, scaleSpeed * Time.deltaTime, scaleSpeed * Time.deltaTime);
    }

    void Update() {
        Move();
        Scale();
    }
}