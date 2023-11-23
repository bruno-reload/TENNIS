using Microsoft.ApplicationInsights.Web.Implementation;
using Newtonsoft.Json;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Threading;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.UIElements;


namespace PlayerPackage
{

    [System.Serializable]
    public struct Pos
    {
        public float x;
        public float y;
        public float z;
        public Pos(Vector3 position)
        {
            x = position.x; y = position.y; z = position.z;
        }
        public static implicit operator Pos(Vector3 position)
        {
            return new Pos(position);
        }
        public Vector3 ToVector3()
        {
            return new Vector3(x, y, z);
        }
    }
    [System.Serializable]
    public enum OWNER { IT_IS_ME, IT_IS_NOT_ME, I_DO_KNOW, DOES_NOT_MATTER };
    [System.Serializable]
    public struct GameDTO
    {
        public OWNER owner;
        public string nickname;
        public Tennis.DAO.model.Team TeamData;
        public Pos position;
    }
    [System.Serializable]
    public struct EntityDTO
    {
        public int id;
        public GameDTO game;
    }
    public class Player : MonoBehaviour
    {
        public EntityDTO Entity;

        public static Player instance;
        private Vector3 Lastposition;
        private int lastPlayer = -1;

        private Tennis.DAO.model.Player PlayerData;
        public Tennis.DAO.model.Player GetPlayer() { return PlayerData; }
        public Tennis.DAO.model.Team GetTeam() { return Entity.game.TeamData; }
        public void SetPlayer(Tennis.DAO.model.Player player)
        {
            this.Entity.game.nickname = player.Nickname;
            this.PlayerData = player;
        }
        public void SetTeam(Tennis.DAO.model.Team team) { this.Entity.game.TeamData = team; }
        void Awake()
        {
            Entity = new EntityDTO();
            Entity.id = -1;
            Entity.game = new GameDTO();
            Entity.game.owner = OWNER.I_DO_KNOW;
            instance = this;
            Lastposition = transform.position;
            Entity.game.position = new Pos(Vector3.zero);
        }


        private void Update()
        {
            if (GameConnect.data != null)
            {
                string json = JsonConvert.SerializeObject(Entity);
                Debug.Log("log: " + json + " " + GameConnect.data);
            }
            if (!GameController.inGame)
            {
                if (GameConnect.connected && !GameController.ClosedLooby)
                {
                    if (GameConnect.data != null && Entity.game.owner == OWNER.I_DO_KNOW)
                    {
                        Debug.Log("novo erro: " + GameConnect.data);
                        EntityDTO another = JsonUtility.FromJson<EntityDTO>(GameConnect.data);
                        if (another.id == 0)
                        {
                            Entity.game.owner = OWNER.IT_IS_NOT_ME;
                        }
                        if (another.id >= lastPlayer)
                        {
                            lastPlayer = another.id;
                        }
                    }
                    if (Entity.game.owner == OWNER.I_DO_KNOW)
                    {
                        SayHi();
                    }
                }
                if (GameController.ClosedLooby)
                {
                    if (GameController.ClosedLooby && Entity.game.owner == OWNER.I_DO_KNOW)
                    {
                        Entity.id = 0;
                        BotManager.OrganizePlayers();
                        if (BotManager.IsReady(lastPlayer))
                        {
                            Entity.game.owner = OWNER.IT_IS_ME;
                        }
                    }
                    if (Entity.id == 0)
                    {
                        BotManager.UpdatePlayersIds();
                    }
                    else if (Entity.id == -1)
                    {
                        EntityDTO somebody = JsonUtility.FromJson<EntityDTO>(GameConnect.data);
                        if (Entity.game.nickname == somebody.game.nickname)
                        {
                            Entity.id = somebody.id;
                            Entity.game.owner = OWNER.DOES_NOT_MATTER;
                        }
                        else
                        {
                            SayHi();
                        }
                    }
                }
            }
            else
            {
                //BotManager.AlertBots();
            }
        }

        public void SayHi()
        {
            string json = JsonConvert.SerializeObject(PlayerPackage.Player.instance.Entity.game);
            GameConnect.instance.GetWriter().WriteLine("\"game\":" + json);
            GameConnect.instance.GetWriter().Flush();
        }
    }
}