using Newtonsoft.Json;
using PlayerPackage;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BotController : MonoBehaviour
{
    public EntityDTO entity;

    public TextMesh BotName;
    private Vector3 lastPosition;


    private void Update()
    {
        if (GameConnect.data != null)
        {
            EntityDTO player = JsonConvert.DeserializeObject<EntityDTO>(GameConnect.data);
            if (entity.game.nickname == player.game.nickname && GameController.inGame)
            {
                if (player.game.TeamData.Name == PlayerPackage.Player.instance.Entity.game.TeamData.Name)
                {
                    InputDTO inODT = player.game.InputDTO;

                    float movimentoHorizontal = inODT.left ? 1f : (inODT.right ? -1f : 0f);
                    float movimentoVertical = inODT.up ? 1f : (inODT.down ? -1f : 0f);


                    Vector3 direcao = new Vector3(movimentoHorizontal, 0f, movimentoVertical).normalized;


                    transform.position += direcao * Moviment.instance.velocidade * Time.deltaTime;
                }
                else
                {
                    InputDTO inODT = player.game.InputDTO;

                    float movimentoHorizontal = inODT.left ? 1f : (inODT.right ? -1f : 0f);
                    float movimentoVertical = inODT.down ? 1f : (inODT.up ? -1f : 0f);


                    Vector3 direcao = new Vector3(movimentoHorizontal, 0f, movimentoVertical).normalized;


                    transform.position += direcao * Moviment.instance.velocidade * Time.deltaTime;

                }
            }
            if (lastPosition != player.game.position.ToVector3() && !player.game.InputDTO.HasDown())
            {
                if (entity.game.nickname == player.game.nickname && GameController.inGame)
                {
                    if (player.game.TeamData.Name == PlayerPackage.Player.instance.Entity.game.TeamData.Name)
                    {
                        Vector3 p = player.game.position.ToVector3();
                        transform.position = p;
                        lastPosition = transform.position;
                    }
                    else {
                        Vector3 p = player.game.position.ToVector3();
                        transform.position = new Vector3(-p.x, p.y, -p.z);
                        lastPosition = transform.position;
                    }
                }
            }
        }
    }
}

