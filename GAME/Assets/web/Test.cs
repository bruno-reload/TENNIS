using Tennis.DAO.model;
using UnityEngine;
using WebService;

public class Test : MonoBehaviour
{
    public void Start()
    {
        //CtrlPlayer ctrlP = new CtrlPlayer();

        //Player p = new Player();


        //p.Name = "novo";
        //p.Nicknane = "novo1";
        //p.Password = "novo";

        //ctrlP.insert(p);

        PlayerWS pws = new PlayerWS();

        Debug.Log(pws.GetPlayer("foi").Name);

    }
}
