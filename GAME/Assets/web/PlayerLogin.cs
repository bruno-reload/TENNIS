using Newtonsoft.Json;
using System;
using System.IO;
using System.Net.Sockets;
using System.Threading;
using Tennis.DAO.controller;
using Tennis.DAO.model;
using TMPro;
using UnityEngine;
using UnityEngine.PlayerLoop;

public class PlayerLogin : MonoBehaviour
{
    //public TMP_InputField nickName;
    //public TMP_Text name;
    //public TMP_Text password;


    //private TcpClient tcpClient;
    //StreamReader reader = null;
    //StreamWriter writer = null;

    //private string server = "127.0.0.1";
    //private int port = 5000;
    //private Thread Thread;

    //private Player player;

    //void Start()
    //{
    //    CtrlPlayer ctrlP = new CtrlPlayer();

    //    player = new Player();

    //    player.Name = "novo";
    //    player.Nickname = "novo1";
    //    player.Password = "novo";



        //ctrlP.insert(player);


        //Debug.Log(JsonConvert.SerializeObject(player));

        //PlayerWS pws = new PlayerWS();

        //Debug.Log(pws.GetPlayer("foi").Name);

    //}
    //public void Find()
    //{

    //    PlayerWS pws = new PlayerWS();
    //    Player p = pws.GetPlayer(nickName.text);

    //    name.text = p.Name;
    //    password.text = p.Password;
    //}
    //void Update()
    //{
    //    if (Input.GetKeyDown(KeyCode.Space))
    //    {
    //        Debug.Log(JsonConvert.SerializeObject(player));
    //        writer.WriteLine(JsonConvert.SerializeObject(player));
    //        writer.Flush();
    //    }
    //}

    //public void Connect()
    //{
    //    if (tcpClient != null)
    //    {
    //        return;
    //    }
    //    try
    //    {
    //        tcpClient = new TcpClient(server, port);
    //        NetworkStream stream = tcpClient.GetStream();

    //        reader = new StreamReader(stream);
    //        writer = new StreamWriter(stream);

    //        Thread = new Thread(Run);
    //        Thread.Start();
    //    }
    //    catch (Exception e)
    //    {
    //        Debug.LogException(e);
    //    }

    //}

    //private void Run()
    //{

    //    string data = reader.ReadLine();
    //    while (data != null)
    //    {
    //        data = reader.ReadLine();
    //        Debug.Log(data);
    //    }
    //}
}
