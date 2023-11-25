using Newtonsoft.Json;
using PlayerPackage;
using System;
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using static UnityEngine.EventSystems.EventTrigger;

public class BotManager : MonoBehaviour
{
    public static List<GameObject> botList;
    public GameObject bot;
    public Transform alies;
    public Transform opponets;
    public Transform center;

    public static BotManager instance;



    private void Awake()
    {
        instance = this;
    }

    private void Start()
    {
        botList = new List<GameObject>();
    }
    public static void SetBot(EntityDTO entity)
    {
        if (entity.game.TeamData.Id == Player.instance.GetTeam().Id)
        {
            Debug.Log("aliado " + entity.game.nickname + " " +  Player.instance.GetPlayer().Nickname);
            GameObject bot = Instantiate(BotManager.instance.bot, BotManager.instance.alies.position, BotManager.instance.alies.rotation);
            bot.GetComponent<BotController>().BotName.text = entity.game.nickname;
            bot.GetComponent<BotController>().entity = entity;
            botList.Add(bot);
        }
        else
        {
            Debug.Log("oponent" + entity.game.nickname + " " + Player.instance.GetPlayer().Nickname);
            GameObject bot = Instantiate(BotManager.instance.bot, BotManager.instance.opponets.position, BotManager.instance.opponets.rotation);
            bot.GetComponent<BotController>().BotName.text = entity.game.nickname;
            bot.GetComponent<BotController>().entity = entity;
            botList.Add(bot);
        }
    }

    private void Update()
    {
        if (GameController.inGame)
        {
            if (GameConnect.data != null)
            {
                EntityDTO player = JsonConvert.DeserializeObject<EntityDTO>(GameConnect.data);

                int i = 0;
                foreach (GameObject go in BotManager.botList)
                {
                    if (BotManager.botList.Count > 0)
                    {
                        if (go.GetComponent<BotController>().entity.game.nickname == player.game.nickname)
                        {
                            break;
                        }
                    }
                    i++;
                }
                if (i == BotManager.botList.Count)
                {
                    if (player.game.nickname != Player.instance.Entity.game.nickname)
                    {
                        BotManager.SetBot(player);
                    }
                }
            }
        }
    }
}
