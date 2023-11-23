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
    /// Summary description for TeamWS
    /// </summary>
    [WebService(Namespace = "http://tempuri.org/")]
    [WebServiceBinding(ConformsTo = WsiProfiles.BasicProfile1_1)]
    [System.ComponentModel.ToolboxItem(false)]
    // To allow this Web Service to be called from script, using ASP.NET AJAX, uncomment the following line. 
    // [System.Web.Script.Services.ScriptService]
    public class TeamWS : System.Web.Services.WebService
    {

        [WebMethod]
        public List<Team> ListTeam()
        {
            CtrlTeam ctrlT = new CtrlTeam();
            
            return ctrlT.getTeamList();
        }

        [WebMethod]
        public Team CreateTeam(string name)
        {
            CtrlTeam ctrlT = new CtrlTeam();
            Team t = new Team();

            t.Name = name;

            ctrlT.insert(t);

            return t;
        }
        [WebMethod]
        public void DeletTeam(string name)
        {
            CtrlTeam ctrlT = new CtrlTeam();

            Team t = ctrlT.getTeamByName(name);

            ctrlT.delete(t);
        }
        [WebMethod]
        public Team GetTeam(int id)
        {
            CtrlTeam ctrlT = new CtrlTeam();

            return ctrlT.getTeam(id.ToString()); ;
        }
    }
}
