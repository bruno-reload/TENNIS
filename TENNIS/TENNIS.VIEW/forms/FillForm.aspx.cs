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
    public partial class FillForm : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {

        }

        protected void Button1_Click(object sender, EventArgs e)
        {
            CtrlFill ctrlF = new CtrlFill();

            Fill f = new Fill();
            
            f.Position = position.Text;
            f.player = nickname.Text;
            f.Team = int.Parse(team.Text);

            ctrlF.insert(f);

        }

        protected void Button2_Click(object sender, EventArgs e)
        {
            CtrlFill ctrlF = new CtrlFill();

            Fill f = new Fill();

            f.Id = int.Parse(id.Text);
            f.Position = position.Text;
            f.player = nickname.Text;
            f.Team = int.Parse(team.Text);

            ctrlF.change(f);
        }

        protected void Button3_Click(object sender, EventArgs e)
        {

            CtrlFill ctrlF = new CtrlFill();

            Fill f = new Fill();

            f.Id = int.Parse(id.Text);
            f.Position = position.Text;
            f.player = nickname.Text;
            f.Team = int.Parse(team.Text);

            ctrlF.delete(f);
        }

        protected void Button4_Click(object sender, EventArgs e)
        {

            CtrlFill ctrlF = new CtrlFill();
            

            grid.DataSource = ctrlF.getFillList();
            grid.DataBind();
        }

        protected void Button5_Click(object sender, EventArgs e)
        {
            Response.Redirect("../index.aspx");
        }
    }
}