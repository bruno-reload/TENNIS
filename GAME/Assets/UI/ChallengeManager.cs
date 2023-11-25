using System.Collections;
using System.Collections.Generic;
using Tennis.DAO.model;
using TMPro;
using UnityEngine;
using UnityEngine.UIElements;
using WebService.Services;

public class ChallengeManager : MonoBehaviour
{
    public GameObject list;
    public GameObject confrontationPrefab;
    private ChallengeWS challangeWS;
    private FindWS findWS;
    private TeamWS teamWS;
    private PhaseWS phaseWS;

    void Start()
    {
        challangeWS = new ChallengeWS();
        findWS = new FindWS();
        teamWS = new TeamWS();
        phaseWS = new PhaseWS();


        foreach (Find f in findWS.GetFindListByIDTEAM(PlayerPackage.Player.instance.GetTeam().Id))
        {
            GameObject GO = Instantiate(confrontationPrefab);

            if (f != null)
            {
                Challeng c = challangeWS.GetChallenge(f.Challeng);

                GO.GetComponent<Transform>().localPosition = Vector2.down * 45;
                GO.transform.GetChild(0).GetComponent<TMP_Text>().text = "Fase: " + phaseWS.GetPhase(c.Phase).Name;
                GO.transform.GetChild(1).GetComponent<TMP_Text>().text = "Desafiante criar sql: " + teamWS.GetTeam(f.team).Name;
                GO.transform.GetChild(2).GetComponent<TMP_Text>().text = "Status: " + (c.Finished ? (f.Winner ? "Venceu!" : "Perdeu!") : "Aguardando");
                GO.transform.SetParent(list.transform);
            }
        }
    }
}
