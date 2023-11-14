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
    public partial class LocalForm : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {

        }

        protected void Button1_Click(object sender, EventArgs e)
        {
            CtrlLocal ctrlL = new CtrlLocal();

            Local l = new Local();

            l.Id = int.Parse(id.Text);
            l.Neighborhood = nei.Text;
            l.City = city.Text;
            l.Street = street.Text;
            l.ZipCode = zipe.Text;

            ctrlL.insert(l);

        }

        protected void Button2_Click(object sender, EventArgs e)
        {
            CtrlLocal ctrlL = new CtrlLocal();

            Local l = new Local();

            l.Id = int.Parse(id.Text);
            l.Neighborhood = nei.Text;
            l.City = city.Text;
            l.Street = street.Text;
            l.ZipCode = zipe.Text;

            ctrlL.change(l);
        }

        protected void Button3_Click(object sender, EventArgs e)
        {
            CtrlLocal ctrlL = new CtrlLocal();

            Local l = new Local();

            l.Id = int.Parse(id.Text);
            l.Neighborhood = nei.Text;
            l.City = city.Text;
            l.Street = street.Text;
            l.ZipCode = zipe.Text;

            ctrlL.delete(l);
        }

        protected void Button4_Click(object sender, EventArgs e)
        {
            CtrlLocal ctrlL = new CtrlLocal();

            grid.DataSource = ctrlL.getLocalList();
            grid.DataBind();
        }
    }
}