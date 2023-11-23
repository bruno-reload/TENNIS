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
    /// Summary description for PhaseWS
    /// </summary>
    [WebService(Namespace = "http://tempuri.org/")]
    [WebServiceBinding(ConformsTo = WsiProfiles.BasicProfile1_1)]
    [System.ComponentModel.ToolboxItem(false)]
    // To allow this Web Service to be called from script, using ASP.NET AJAX, uncomment the following line. 
    // [System.Web.Script.Services.ScriptService]
    public class PhaseWS : System.Web.Services.WebService
    {

        [WebMethod]
        public Phase GetPhase(int id)
        {
            CtrlPhase ctrlP = new CtrlPhase();

            return ctrlP.getPhase(id.ToString());
        }
    }
}
