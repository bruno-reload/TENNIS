using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class Menu : MonoBehaviour
{
    public TMP_Text playerName;
    public TMP_Text team;


    public void SetName() {
        playerName.text = PlayerPackage.Player.instance.GetPlayer().Name;
    }
    public void SetTeam()
    {
        team.text = PlayerPackage.Player.instance.GetTeam().Name;
    }
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
