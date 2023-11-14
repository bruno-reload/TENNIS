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
    public partial class AwardForm : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {

        }

        protected void Button1_Click(object sender, EventArgs e)
        {
            CtrlAward ctrcA = new CtrlAward();

            Award a = new Award();

            a.Position = position.Text;
            a.Value = value.Text;
            a.Match = int.Parse(match.Text);

            ctrcA.insert(a);
        }

        protected void Button3_Click(object sender, EventArgs e)
        {
            CtrlAward ctrlA = new CtrlAward();

            grid.DataSource = ctrlA.getAwardList();
            grid.DataBind();
        }

        protected void Button4_Click(object sender, EventArgs e)
        {
            CtrlAward ctrcA = new CtrlAward();

            Award a = new Award();

            a.Id = int.Parse(id.Text);
            a.Position = position.Text;
            a.Value = value.Text;
            a.Match = int.Parse(match.Text);

            ctrcA.change(a);
        }

        protected void Button2_Click(object sender, EventArgs e)
        {
            CtrlAward ctrcA = new CtrlAward();

            Award a = new Award();

            a.Id = int.Parse(id.Text);

            ctrcA.delete(a);
        }

        protected void Button5_Click(object sender, EventArgs e)
        {
            Response.Redirect("../index.aspx");
        }
    }
}