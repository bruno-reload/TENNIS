using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameController : MonoBehaviour
{

    public static bool ClosedLooby = false;
    public static bool inGame = false;
    public void StartGame() {
        inGame = true;
    }
    public void FindedOwner() {
        ClosedLooby = true;
    }
}
