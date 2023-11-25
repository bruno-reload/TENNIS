using Microsoft.Owin.Security;
using Newtonsoft.Json;
using PlayerPackage;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Globalization;
using System.IO;
using System.Net.Sockets;
using System.Threading;
using System.Threading.Tasks;
using UnityEngine;

public class GameConnect : MonoBehaviour
{
    public GameObject login;
    private TcpClient tcpClient;
    private StreamReader reader = null;
    private StreamWriter writer = null;
    public static string data;

    private string server = "127.0.0.1";
    private int port = 5000;


    public static Semaphore semaphore;
    private Thread thread;
    public static GameConnect instance;
    public static bool connected = false;

    public StreamWriter GetWriter() { return writer; }
    public StreamReader GetReader() { return reader; }

    private void Awake()
    {
        login.SetActive(true);
        instance = this;
    }

    private void Start()
    {
        semaphore = new Semaphore(1, 1);
    }

    public void Connect()
    {
        if (tcpClient != null)
        {
            return;
        }
        try
        {
            tcpClient = new TcpClient(server, port);
            NetworkStream stream = tcpClient.GetStream();

            reader = new StreamReader(stream);
            writer = new StreamWriter(stream);

            thread = new Thread(Run);
            thread.Start();

            connected = true;

        }
        catch (Exception e)
        {
            Debug.LogException(e);
        }
    }
    private void Run()
    {
        data = reader.ReadLine();
        while (data != null)
        {
            Debug.LogWarning(data);
            data = reader.ReadLine();
        }
        reader.Close();
    }
}
