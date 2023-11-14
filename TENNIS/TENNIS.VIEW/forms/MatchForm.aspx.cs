using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;
using Tennis.DAO.controller;
using Tennis.DAO.model;

namespace TENNIS.VIEW.forms
{
    public partial class MatchForm : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {

        }

        protected void Button1_Click(object sender, EventArgs e)
        {
            CtrlMatch CtrlM = new CtrlMatch();

            Match m = new Match();
            
            m.Start = DateTime.Parse(start.Text);
            m.End = DateTime.Parse(end.Text);
            m.Name = name.Text;

            CtrlM.insert(m);
        }

        protected void Button4_Click(object sender, EventArgs e)
        {
            CtrlMatch CtrlM = new CtrlMatch();

            grid.DataSource = CtrlM.getMatchList();
            grid.DataBind();
        }

        protected void Button2_Click(object sender, EventArgs e)
        {

            CtrlMatch CtrlM = new CtrlMatch();

            Match m = new Match();

            m.Id = Int32.Parse(id.Text);
            m.Start = DateTime.Parse(start.Text);
            m.End = DateTime.Parse(end.Text);
            m.Name = name.Text;

            CtrlM.change(m);
        }

        protected void Button3_Click(object sender, EventArgs e)
        {

            CtrlMatch CtrlM = new CtrlMatch();
            CtrlPhase CtrlF = new CtrlPhase();

            Match m = new Match();

            m.Id = int.Parse(id.Text);
            

            //o metch só pode ser deletado quando n houver phases lincadas a ele, devo fazer isso através de uma query
        
            CtrlM.delete(m);
        }
    }
}