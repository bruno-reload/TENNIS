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
    public partial class FindForm : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {

        }

        protected void Button1_Click(object sender, EventArgs e)
        {
            CtrlFind ctrlF = new CtrlFind();

            Find f = new Find();
            
            f.Points = int.Parse(points.Text);
            f.team = int.Parse(team.Text);
            f.Challeng = int.Parse(challenge.Text);
            f.Winner = bool.Parse(winner.Text);

            ctrlF.insert(f);
        }

        protected void Button2_Click(object sender, EventArgs e)
        {

            CtrlFind ctrlF = new CtrlFind();

            Find f = new Find();

            f.Id = int.Parse(id.Text);
            f.Points = int.Parse(points.Text);
            f.team = int.Parse(team.Text);
            f.Challeng = int.Parse(challenge.Text);
            f.Winner = bool.Parse(winner.Text);

            ctrlF.change(f);
        }

        protected void Button3_Click(object sender, EventArgs e)
        {

            CtrlFind ctrlF = new CtrlFind();

            Find f = new Find();

            f.Id = int.Parse(id.Text);
            f.Points = int.Parse(points.Text);
            f.team = int.Parse(team.Text);
            f.Challeng = int.Parse(challenge.Text);
            f.Winner = bool.Parse(winner.Text);

            ctrlF.delete(f);
        }

        protected void Button4_Click(object sender, EventArgs e)
        {

            CtrlFind ctrlF = new CtrlFind();

            grid.DataSource = ctrlF.getFindList();
            grid.DataBind();
        }
    }
}