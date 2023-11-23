using Newtonsoft.Json;
using PlayerPackage;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BotController : MonoBehaviour
{
    public EntityDTO entity;

    public TextMesh text;

    private void Update()
    {
        text.text = entity.game.nickname;
    }
}

