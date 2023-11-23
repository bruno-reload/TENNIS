using Newtonsoft.Json;
using Tennis.DAO.controller;
using Tennis.DAO.model;
using TMPro;
using UnityEngine;
using UnityEngine.Events;
using WebService;

public class UserManager : MonoBehaviour
{
    public new TMP_InputField name;
    public TMP_InputField nickname;
    public TMP_InputField password;

    public TMP_Text message;

    public UnityEvent onLogin;
    public UnityEvent onErnLogin;
    public UnityEvent onCreate;
    public UnityEvent onErCreate;

    private PlayerWS playerWS;

    public static UserManager instance;

    private void Awake()
    {
        playerWS = new PlayerWS();
    }

    public  void Start()
    {
        instance = this;
    }

    public void Login() {
        if (nickname.text == "" || password.text == "")
        {
            message.text = "Cadastre um Usuário!";
            onErnLogin.Invoke();
            return;
        }

        Tennis.DAO.model.Player p = playerWS.GetPlayer(nickname.text, password.text);

        if (p != null)
        {
            PlayerPackage.Player.instance.SetPlayer(p);
            onLogin.Invoke();
        }
        else
        {
            onErnLogin.Invoke();
        }
    }

    public void Create() {
        PlayerPackage.Player.instance.SetPlayer(playerWS.CreatePlayer(name.text, nickname.text, password.text));
        if (PlayerPackage.Player.instance.GetPlayer() != null)
        {
            message.text = "Novo usuário cadastrado!";
            onCreate.Invoke();
        }
        else {
            onErCreate.Invoke();
            message.text = "Ocorreu algum erro durante o cadastro!";
        }
    }
}
