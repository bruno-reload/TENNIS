using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Web;
using System.Web.Services;
using Tennis.DAO.controller;
using Tennis.DAO.model;

namespace WebService.Services
{
    /// <summary>
    /// Summary description for FillWS
    /// </summary>
    [WebService(Namespace = "http://tempuri.org/")]
    [WebServiceBinding(ConformsTo = WsiProfiles.BasicProfile1_1)]
    [System.ComponentModel.ToolboxItem(false)]
    // To allow this Web Service to be called from script, using ASP.NET AJAX, uncomment the following line. 
    // [System.Web.Script.Services.ScriptService]
    public class FillWS : System.Web.Services.WebService
    {
        [WebMethod]
        public Fill CreateiFill(int teamId, string nickname, string position)
        {
            CtrlFill ctrlF = new CtrlFill();

            Fill f = new Fill();

            f.player = nickname;
            f.Team = teamId;
            f.Position = position;

            ctrlF.insert(f);

            return f;

        }

        [WebMethod]
        public Fill GetFillByPlayer(string nickname)
        {
            CtrlFill ctrlF = new CtrlFill();
            return ctrlF.getFill(nickname);

        }
    }
}
