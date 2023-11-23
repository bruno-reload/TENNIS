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
    /// Summary description for FindWS
    /// </summary>
    [WebService(Namespace = "http://tempuri.org/")]
    [WebServiceBinding(ConformsTo = WsiProfiles.BasicProfile1_1)]
    [System.ComponentModel.ToolboxItem(false)]
    // To allow this Web Service to be called from script, using ASP.NET AJAX, uncomment the following line. 
    // [System.Web.Script.Services.ScriptService]
    public class FindWS : System.Web.Services.WebService
    {

        [WebMethod]
        public Find GetFind(int id)
        {
            CtrlFind ctrlF = new CtrlFind();

            return ctrlF.getFind(id.ToString());
        }

        public List<Find> GetFindListByIDTEAM(int id) {
            CtrlFind ctrlF = new CtrlFind();

            return ctrlF.getFindListByIDTEAM(id);
        }
    }
}
