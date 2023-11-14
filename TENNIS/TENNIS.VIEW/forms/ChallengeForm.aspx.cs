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
    public partial class ChallengeForm : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {

        }

        protected void Button1_Click(object sender, EventArgs e)
        {
            CtrlChalleng ctrC = new CtrlChalleng();

            Challeng c = new Challeng();
            
            c.Marked = int.Parse(marked.Text);
            c.Phase = int.Parse(phase.Text);

            int year = DateTime.Now.Year;
            int month = DateTime.Now.Month;
            int day = DateTime.Now.Day;

            int Hour = DateTime.Parse(duration.Text).Hour;
            int Minute = DateTime.Parse(duration.Text).Minute;
            int Second = DateTime.Parse(duration.Text).Second;

            c.Duration = new DateTime(year, month, day, Hour, Minute, Second).ToLocalTime();
            c.Finished = bool.Parse(finishd.Text);

            ctrC.insert(c);
        }

        protected void Button2_Click(object sender, EventArgs e)
        {
            CtrlChalleng ctrC = new CtrlChalleng();

            Challeng c = new Challeng();

            c.Id = int.Parse(id.Text);
            c.Marked = int.Parse(marked.Text);
            c.Phase = int.Parse(phase.Text);

            int year = DateTime.Now.Year;
            int month = DateTime.Now.Month;
            int day = DateTime.Now.Day;

            int Hour = DateTime.Parse(duration.Text).Hour;
            int Minute = DateTime.Parse(duration.Text).Minute;
            int Second = DateTime.Parse(duration.Text).Second;

            c.Duration = new DateTime(year, month, day, Hour, Minute, Second).ToLocalTime();

            ctrC.change(c);
        }

        protected void Button3_Click(object sender, EventArgs e)
        {
            CtrlChalleng ctrC = new CtrlChalleng();

            Challeng c = new Challeng();

            c.Id = int.Parse(id.Text);
            c.Marked = int.Parse(marked.Text);
            c.Phase = int.Parse(phase.Text);

            int year = DateTime.Now.Year;
            int month = DateTime.Now.Month;
            int day = DateTime.Now.Day;

            int Hour = DateTime.Parse(duration.Text).Hour;
            int Minute = DateTime.Parse(duration.Text).Minute;
            int Second = DateTime.Parse(duration.Text).Second;

            c.Duration = new DateTime(year, month, day, Hour, Minute, Second).ToLocalTime();

            ctrC.delete(c);
        }

        protected void Button4_Click(object sender, EventArgs e)
        {

            CtrlChalleng ctrC = new CtrlChalleng();

            grid.DataSource = ctrC.getChallengList();
            grid.DataBind();
        }

        protected void Button5_Click(object sender, EventArgs e)
        {
            Response.Redirect("../index.aspx");
        }
    }
}