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
    public partial class PhaseForm : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {

        }

        protected void Button1_Click(object sender, EventArgs e)
        {
            CtrlPhase ctrlP = new CtrlPhase();

            Phase p = new Phase();
            
            p.Name = name.Text;
            p.Match = int.Parse(match.Text);
            p.MinPoints = int.Parse(min_points.Text);


            ctrlP.insert(p);
        }

        protected void Button2_Click(object sender, EventArgs e)
        {
            CtrlPhase ctrlP = new CtrlPhase();

            Phase p = new Phase();

            p.Id = int.Parse(id.Text);
            p.Name = name.Text;
            p.Match = int.Parse(match.Text);
            p.MinPoints = int.Parse(min_points.Text);

            ctrlP.change(p);
        }

        protected void Button3_Click(object sender, EventArgs e)
        {
            CtrlPhase ctrlP = new CtrlPhase();

            Phase p = new Phase();

            p.Id = int.Parse(id.Text);
            p.Name = name.Text;
            p.Match = int.Parse(match.Text);
            p.MinPoints = int.Parse(min_points.Text);

            ctrlP.delete(p);
        }
        
        protected void Button4_Click1(object sender, EventArgs e)
        {
            CtrlPhase ctrlP = new CtrlPhase();

            grid.DataSource = ctrlP.getPhaseList();
            grid.DataBind();
        }
    }
}