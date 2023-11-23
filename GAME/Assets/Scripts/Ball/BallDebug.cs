using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BallDebug : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        Debug.DrawLine(transform.position,transform.position +  GetComponent<Rigidbody>().velocity.normalized * 2f, Color.red);
    }
}
