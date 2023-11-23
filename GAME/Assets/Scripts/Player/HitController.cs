using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HitController : MonoBehaviour
{
    public float force = 50f;

    private void OnCollisionEnter(Collision collision)
    {
        collision.collider.isTrigger = true; 

        if (collision.contacts.Length > 0)
        {
            collision.rigidbody.Sleep();

            Vector3 normalDaFace = collision.contacts[0].normal;

            collision.rigidbody.AddForce(normalDaFace * force * -1);

            collision.rigidbody.WakeUp();
        }
    }
    private void OnTriggerExit(Collider other)
    {
        other.isTrigger = false;
    }
}
