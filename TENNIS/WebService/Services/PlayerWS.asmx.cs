using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.Services;
using Tennis.DAO.controller;
using Tennis.DAO.model;

namespace WebService
{
    /// <summary>
    /// Summary description for PlayerWS
    /// </summary>
    [WebService(Namespace = "http://tempuri.org/")]
    [WebServiceBinding(ConformsTo = WsiProfiles.BasicProfile1_1)]
    [System.ComponentModel.ToolboxItem(false)]
    // To allow this Web Service to be called from script, using ASP.NET AJAX, uncomment the following line. 
    // [System.Web.Script.Services.ScriptService]
    public class PlayerWS : System.Web.Services.WebService
    {

        [WebMethod]
        public string HelloWorld()
        {
            return "Hello World";
        }


        [WebMethod]
        public Player GetPlayer(string id, string passwrod)
        {
            CtrlPlayer ctrlP = new CtrlPlayer();
            Player p = ctrlP.getPlayer(id);

            if (p.Password.Equals(passwrod)) {
                return p;
            }
            return null;
        }


    }
}
