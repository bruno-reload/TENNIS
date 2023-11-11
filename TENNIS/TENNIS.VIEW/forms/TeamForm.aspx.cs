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
    public partial class TeamForm : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {

        }

        protected void Button5_Click(object sender, EventArgs e)
        {
            CtrlTeam ctrlT = new CtrlTeam();
            grid.DataSource = ctrlT.getTeamList();
            grid.DataBind();
        }

        protected void Button1_Click(object sender, EventArgs e)
        {
            CtrlTeam ctrlT = new CtrlTeam();
            Team t = new Team();
            
            t.Name = name.Text;

            ctrlT.insert(t);
        }

        protected void Button4_Click(object sender, EventArgs e)
        {
            CtrlTeam ctrlT = new CtrlTeam();
            Team t = new Team();

            t.Id = int.Parse(id.Text);
            t.Name = name.Text;

            ctrlT.change(t);
                
        }

        protected void Button3_Click(object sender, EventArgs e)
        {
            CtrlTeam ctrlT = new CtrlTeam();
            Team t = new Team();

            t.Id = int.Parse(id.Text);
            t.Name = name.Text;

            ctrlT.delete(t);
        }

        protected void Button6_Click(object sender, EventArgs e)
        {

            Response.Redirect("../index.aspx");
        }
    }
}