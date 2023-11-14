using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;
using Tennis.DAO.model;
using Tennis.DAO.controller;

namespace TENNIS.VIEW
{
    public partial class index : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
        }

        protected void Button1_Click1(object sender, EventArgs e)
        {
            Response.Redirect("forms/PlayerForm.aspx");
        }

        protected void Button1_Click(object sender, EventArgs e)
        {
            Response.Redirect("forms/TeamForm.aspx");
        }

        protected void Button2_Click(object sender, EventArgs e)
        {
            Response.Redirect("forms/FillForm.aspx");
        }

        protected void Button3_Click(object sender, EventArgs e)
        {
            Response.Redirect("forms/MatchForm.aspx");
        }

        protected void Button4_Click(object sender, EventArgs e)
        {
            Response.Redirect("forms/AwardForm.aspx");
        }

        protected void Button5_Click(object sender, EventArgs e)
        {
            Response.Redirect("forms/PhaseForm.aspx");
        }

        protected void Button6_Click(object sender, EventArgs e)
        {
            Response.Redirect("forms/LocalForm.aspx");
        }

        protected void Button7_Click(object sender, EventArgs e)
        {
            Response.Redirect("forms/MarkedForm.aspx");
        }

        protected void Button8_Click(object sender, EventArgs e)
        {
            Response.Redirect("forms/ChallengeForm.aspx");
        }

        protected void Button9_Click(object sender, EventArgs e)
        {
            Response.Redirect("forms/FindForm.aspx");
        }
    }
}