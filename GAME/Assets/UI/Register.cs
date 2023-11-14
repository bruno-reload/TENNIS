using System.Collections;
using System.Collections.Generic;
using Tennis.DAO.model;
using TMPro;
using UnityEngine;
using WebService;

public class Register : MonoBehaviour
{
    public TMP_InputField nickname;
    public TMP_InputField password;

    private PlayerWS playerWS;
    private Player player;

    private void Start()
    {
        playerWS = new PlayerWS();

    }

    public void Login() {
        //playerWS.GetPlayer(nickname.text, password.text);
    }
}
