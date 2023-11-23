using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Moviment : MonoBehaviour
{
    public float velocidade = 5f;
    public float gravidade = 9.8f;
    private Rigidbody rb;   
    void Start()
    {
        rb = GetComponent<Rigidbody>();
    }

    void Update()
    {
        if (!GameConnect.connected) {
            return;
        }
        float movimentoHorizontal = Input.GetKey(KeyCode.D) ? 1f : (Input.GetKey(KeyCode.A) ? -1f : 0f);
        float movimentoVertical = Input.GetKey(KeyCode.W) ? 1f : (Input.GetKey(KeyCode.S) ? -1f : 0f);

        Vector3 direcao = new Vector3(movimentoHorizontal, 0f, movimentoVertical).normalized;

        Ray ray = new Ray(transform.position, Vector3.down);

        float distanciaRaycast = 1.0f;
        Debug.DrawLine(transform.position, transform.position + ray.direction * distanciaRaycast);

        if (Physics.Raycast(ray, distanciaRaycast))
        {
            transform.position += direcao * velocidade * Time.deltaTime;
        }
        else
        {
            transform.position += direcao * velocidade * Time.deltaTime + Vector3.down * gravidade * Time.deltaTime;
        }
    }
}
