using System;
using System.Collections.Generic;
using System.Linq;
using System.Net;
using System.Net.Sockets;
using System.Text;
using System.Threading.Tasks;

namespace Server
{
    class Program
    {
        static void Main(string[] args)
        {
            TcpListener listener = null;
            int port = 5000;
            GameController controller = new GameController();
            bool readay = true;
            try
            {
                IPAddress adressed = IPAddress.Parse("127.0.0.1");
                listener = new TcpListener(adressed, port);
                listener.Start();

                while (readay)
                {
                    if (!controller.IsReady())
                    {
                        Console.WriteLine("Waiting connections...");
                        TcpClient client = listener.AcceptTcpClient();
                        controller.AddPlayer(client);
                    }
                }
            }
            catch (SocketException ex)
            {
                Console.WriteLine("Erro de red: " + ex);
            }
        }
    }
}
