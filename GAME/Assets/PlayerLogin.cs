using System;
using System.Collections;
using System.Collections.Generic;
using Tennis.DAO.model;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using WebService;

public class PlayerLogin : MonoBehaviour
{
    public TMP_InputField nickName;
    public TMP_Text name;
    public TMP_Text password;

    void Start()
    {
        
    }
    public void Find() {

        PlayerWS pws = new PlayerWS();
        Player p = pws.GetPlayer(nickName.text);

        name.text = p.Name;
        password.text = p.Password;
    }
    void Update()
    {
        
    }
}
