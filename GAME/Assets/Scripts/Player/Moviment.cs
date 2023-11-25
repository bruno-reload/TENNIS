using PlayerPackage;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Moviment : MonoBehaviour
{
    public float velocidade = 5f;
    public float gravidade = 9.8f;
    private Rigidbody rb;

    public static Moviment instance;
  
    private void Awake()
    {
        instance = this;
    }
    void Start()
    {
        rb = GetComponent<Rigidbody>();
    }

    void Update()
    {
        if (!GameConnect.connected) {
            return;
        }
        GameDTO game = PlayerPackage.Player.instance.Entity.game;

        game.InputDTO.up = Input.GetKey(KeyCode.W);
        game.InputDTO.down = Input.GetKey(KeyCode.S);
        game.InputDTO.left = Input.GetKey(KeyCode.A);
        game.InputDTO.right = Input.GetKey(KeyCode.D);

        PlayerPackage.Player.instance.Entity.game = game;

        float movimentoHorizontal = game.InputDTO.right ? 1f : (game.InputDTO.left ? -1f : 0f);
        float movimentoVertical = game.InputDTO.up ? 1f : (game.InputDTO.down ? -1f : 0f);


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
