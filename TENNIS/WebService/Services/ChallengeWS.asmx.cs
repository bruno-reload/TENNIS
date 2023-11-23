using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.Services;
using Tennis.DAO.controller;
using Tennis.DAO.model;

namespace WebService.Services
{
    /// <summary>
    /// Summary description for ChallengeWS
    /// </summary>
    [WebService(Namespace = "http://tempuri.org/")]
    [WebServiceBinding(ConformsTo = WsiProfiles.BasicProfile1_1)]
    [System.ComponentModel.ToolboxItem(false)]
    // To allow this Web Service to be called from script, using ASP.NET AJAX, uncomment the following line. 
    // [System.Web.Script.Services.ScriptService]
    public class ChallengeWS : System.Web.Services.WebService
    {


        [WebMethod]
        public List<Challeng> ListChallenge()
        {
            CtrlChalleng ctrlC = new CtrlChalleng();

            return ctrlC.getChallengList();
        }

        [WebMethod]
        public Challeng GetChallenge(int id)
        {
            CtrlChalleng ctrlC = new CtrlChalleng();

            return ctrlC.getChalleng(id.ToString());
        }
    }
}
