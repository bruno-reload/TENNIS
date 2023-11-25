using Microsoft.ApplicationInsights.Web.Implementation;
using Newtonsoft.Json;
using NUnit.Framework;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Data.Entity.Core.Metadata.Edm;
using System.IO;
using System.Threading;
using System.Threading.Tasks;
using System.Web.Services.Description;
using System.Windows.Forms;
using UnityEngine;
using UnityEngine.UIElements;


namespace PlayerPackage
{
    [System.Serializable]
    public struct InputDTO
    {

        public bool up;
        public bool left;
        public bool right;
        public bool down;

        public static bool operator !=(InputDTO a, InputDTO b)
        {
            return a.up != b.up || a.down != b.down || a.left != b.left || a.right != b.right ;
        }
        public static bool operator ==(InputDTO a, InputDTO b)
        {
            return a.up == b.up && a.down == b.down && a.left == b.left && a.right == b.right;
        }

        public override string ToString()
        {
            return "{up: " + up + ", left: " + left + ", right: " + right + ", down: " + down + "}";
        }

        internal bool HasDown()
        {
            return up || left || right || down;
        }
    }

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
        public InputDTO InputDTO;
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
        private float delay = 0.5f;

        public static Player instance;
        private int lastPlayer = -1;

        private Tennis.DAO.model.Player PlayerData;
        private InputDTO lastInputDTO;

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
            instance = this;
        }
        private void Start()
        {
            Entity = new EntityDTO();
            Entity.game = new GameDTO();
            Entity.game.owner = OWNER.I_DO_KNOW;
            Entity.game.position = new Pos(Vector3.zero);
            lastInputDTO = Entity.game.InputDTO;
            Entity.game.InputDTO = new InputDTO();
        }
        private void Update()
        {
            if (!GameController.inGame && GameConnect.connected)
            {
                if (GameConnect.data != null)
                {
                    EntityDTO player = JsonConvert.DeserializeObject<EntityDTO>(GameConnect.data);
                    if (player.game.nickname == Entity.game.nickname && player.game.owner == OWNER.I_DO_KNOW)
                    {
                        if (player.id == 0)
                        {
                            Entity.game.owner = OWNER.IT_IS_ME;
                        }
                        else
                        {
                            Entity.game.owner = OWNER.IT_IS_NOT_ME;
                        }
                    }
                }
            }
            if (Entity.game.InputDTO != lastInputDTO)
            {
                Debug.Log(Entity.game.InputDTO.ToString());

                Entity.game.position = transform.position;
                lastInputDTO = Entity.game.InputDTO;
                SayHi();
            }
        }

        public void SayHi()
        {
            string json = JsonConvert.SerializeObject(Entity.game);
            if (json != null)
            {
                StreamWriter writer = GameConnect.instance.GetWriter();
                if (writer != null)
                {
                    writer.WriteLine("\"game\":" + json);
                    writer.Flush();
                }
            }
        }
    }
}