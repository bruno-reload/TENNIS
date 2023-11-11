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
    }
}