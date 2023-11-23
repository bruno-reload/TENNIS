using Newtonsoft.Json.Linq;
using System.Collections;
using System.Collections.Generic;
using Tennis.DAO.model;
using TMPro;
using UnityEngine;
using UnityEngine.Experimental.AI;
using WebService;
using WebService.Services;
using static TMPro.TMP_Dropdown;

public class TeamManager : MonoBehaviour
{
    public TMP_InputField IputFieldTeam;
    public TMP_InputField InputFieldposition;
    public TMP_Dropdown dropdown;
    private Dictionary<int,int> optLidt = new Dictionary<int,int>();
    private TeamWS teamWS;
    private FillWS fillWS;
    void Start()
    {
        fillWS = new FillWS();
        teamWS = new TeamWS();

        LoadButtonSelect();
    }

    public void LoadButtonSelect() {
        List<OptionData> options = new List<OptionData>();
        List<Team> teams = teamWS.ListTeam();
        dropdown.ClearOptions();
        int index = 0;
        optLidt.Clear();
        foreach ( Team team in teams)
        {
            OptionData data = new OptionData(team.Name);
            optLidt.Add(index,team.Id);
            options.Add(data);
            index++;
        }
        dropdown.AddOptions(options);
    }

    public void CreateTeam() {
        teamWS.CreateTeam(IputFieldTeam.text);
    }
    public void CreateFill() {
        fillWS.CreateiFill(optLidt[dropdown.value], PlayerPackage.Player.instance.GetPlayer().Nickname, InputFieldposition.text);
    }
    public void SetFill()
    {
        fillWS = new FillWS();
        teamWS = new TeamWS();

        string name = PlayerPackage.Player.instance.GetPlayer().Nickname;
        int IDTeam = fillWS.GetFillByPlayer(name).Team;
        Team t = teamWS.GetTeam(IDTeam);
        PlayerPackage.Player.instance.SetTeam(t);
    }
    public void SetTeam() {
        PlayerPackage.Player.instance.SetTeam(teamWS.GetTeam(optLidt[dropdown.value]));
    }
    public void DeletTeam()
    {
        teamWS.DeletTeam(IputFieldTeam.text);
    }
}
