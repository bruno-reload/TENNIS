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
    class Player
    {
        public int id { get; set; }
        GameController controller;
        TcpClient client;

        StreamReader reader = null;
        StreamWriter writer = null;

        Thread thread;

        public Player(GameController gameController, int id, TcpClient client)
        {
            this.controller = gameController;
            this.client = client;
            this.id = id;

            NetworkStream stram = client.GetStream();
            reader = new StreamReader(stram);
            writer = new StreamWriter(stram);

            thread = new Thread(Run);
            thread.Start();
        }
        public void Run()
        {
            String data = null;
            data = reader.ReadLine();

            while (data != null)
            {
                Console.WriteLine("Recebido no id: " + id + " | Messagem: " + data);
                foreach (Player p in this.controller.players)
                {
                    if (p != null && p.id != id)
                    {
                        p.Send(data);
                    }
                }
                data = reader.ReadLine();
            }
            client.Close();
        }

        private void Send(string message)
        {
            Console.WriteLine("Enviado do id: " + id + " | Messagem: " + message);
            writer.WriteLine("{\"id\": " +id+","+  message+ "}");
            writer.Flush();
        }
    }
}
