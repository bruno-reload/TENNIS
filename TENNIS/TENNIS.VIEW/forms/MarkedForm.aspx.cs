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
    public partial class MarkedForm : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {

        }

        protected void Button1_Click(object sender, EventArgs e)
        {
            CtrlMarked ctrlM = new CtrlMarked();

            Marked m = new Marked();

            m.Id = int.Parse(id.Text);
            int year = DateTime.Parse(data.Text).Year; 
            int month = DateTime.Parse(data.Text).Month;
            int day = DateTime.Parse(data.Text).Day;

            int Hour = DateTime.Parse(hora.Text).Hour;
            int Minute = DateTime.Parse(hora.Text).Minute;
            int Second = DateTime.Parse(hora.Text).Second;

            m.DateTime = new DateTime(year, month, day, Hour, Minute, Second);
            m.Local = int.Parse(local.Text);

            ctrlM.insert(m);
        }

        protected void Button4_Click(object sender, EventArgs e)
        {
            CtrlMarked ctrlM = new CtrlMarked();

            grid.DataSource = ctrlM.getMarkedList();
            grid.DataBind();
        }

        protected void Button2_Click(object sender, EventArgs e)
        {
            CtrlMarked ctrlM = new CtrlMarked();

            Marked m = new Marked();


            m.Id = int.Parse(id.Text);
            int year = DateTime.Parse(data.Text).Year;
            int month = DateTime.Parse(data.Text).Month;
            int day = DateTime.Parse(data.Text).Day;

            int Hour = DateTime.Parse(hora.Text).Hour;
            int Minute = DateTime.Parse(hora.Text).Minute;
            int Second = DateTime.Parse(hora.Text).Second;

            m.DateTime = new DateTime(year, month, day, Hour, Minute, Second);
            m.Local = int.Parse(local.Text);

            ctrlM.change(m);
        }

        protected void Button3_Click(object sender, EventArgs e)
        {
            CtrlMarked ctrlM = new CtrlMarked();

            Marked m = new Marked();

            int year = DateTime.Parse(data.Text).Year;
            int month = DateTime.Parse(data.Text).Month;
            int day = DateTime.Parse(data.Text).Day;

            int Hour = DateTime.Parse(hora.Text).Hour;
            int Minute = DateTime.Parse(hora.Text).Minute;
            int Second = DateTime.Parse(hora.Text).Second;

            m.DateTime = new DateTime(year, month, day, Hour, Minute, Second);
            m.Local = int.Parse(local.Text);

            ctrlM.delete(m);
        }
    }
}