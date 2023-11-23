using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Threading;
using System.Net;
using System.Net.Sockets;
using System.IO;


namespace Server
{
    class GameController
    {
        const int MAX = 6;
        int id = 0;
        bool ready = false;

        public Player[] players;

        public bool IsReady()
        {
            return this.ready;
        }
        public GameController()
        {
            this.players = new Player[MAX];
        }
        private int NextId()
        {
            return this.id++;
        }
        public void AddPlayer(TcpClient tcpClient)
        {
            if (this.id > MAX - 1) {
                DisconnectPlayer(tcpClient);
                return;
            }
            int id = NextId();
            this.players[id] = new Player(this, id, tcpClient);
            Console.WriteLine("Novo jogador conectado com o id: " + id);
        }

        private void DisconnectPlayer(TcpClient tcpClient)
        {
            NetworkStream stream = tcpClient.GetStream();
            StreamWriter write = new StreamWriter(stream);
            Console.WriteLine("Servidor lotado!");
            write.WriteLine("Servidor lotado!");
            write.Flush();
            write.Close();
        }


    }
}
