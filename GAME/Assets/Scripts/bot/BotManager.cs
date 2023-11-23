using Newtonsoft.Json;
using PlayerPackage;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

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
    public static void OrganizePlayers()
    {
        if (GameConnect.data == null) {
            return;
        }
        int count = 0;
        EntityDTO another = JsonUtility.FromJson<EntityDTO>(GameConnect.data);
        foreach (GameObject bot in BotManager.botList)
        {
            int id = another.id;
            if (bot.GetComponent<PlayerPackage.Player>().Entity.id == id && count < botList.Count)
            {
                count++;
            }
        }
        if (count < botList.Count)
        {
            if (another.game.TeamData.Id == Player.instance.GetTeam().Id)
            {
                GameObject bot = Instantiate(BotManager.instance.bot, BotManager.instance.alies.position, BotManager.instance.alies.rotation);
                bot.GetComponent<PlayerPackage.Player>().Entity = another;
                botList.Add(bot);
            }
            else
            {
                GameObject bot = Instantiate(BotManager.instance.bot, BotManager.instance.opponets.position, BotManager.instance.opponets.rotation);
                bot.GetComponent<PlayerPackage.Player>().Entity = another;
                botList.Add(bot);
            }
        }
    }
    public static bool IsReady(int max)
    {
        return max >= botList.Count;
    }

    internal static void UpdatePlayersIds()
    {
        foreach (GameObject bot in botList)
        {
            string json = JsonConvert.SerializeObject(bot.GetComponent<Player>().Entity.game);
            GameConnect.instance.GetWriter().WriteLine(json);
            GameConnect.instance.GetWriter().Flush();
        }
    }

    public static void AlertBots()
    {
        EntityDTO somebody = JsonUtility.FromJson<EntityDTO>(GameConnect.data);
        foreach (GameObject bot in BotManager.botList)
        {
            if (somebody.id == bot.GetComponent<BotController>().entity.id)
            {
            if (somebody.id == bot.GetComponent<BotController>().entity.id)
                   bot.transform.position = somebody.game.position.ToVector3();
            }
        }
    }
}
