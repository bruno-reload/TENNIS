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
    public partial class PlayerForm : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            
        }

        protected void Button5_Click(object sender, EventArgs e)
        {

            Response.Redirect("../index.aspx");
        }

        protected void Button4_Click(object sender, EventArgs e)
        {
            CtrlPlayer ctrlP = new CtrlPlayer();

            grid.DataSource = ctrlP.getPlayerList();
            grid.DataBind();
            
        }

        protected void Button2_Click(object sender, EventArgs e)
        {
            Player p = new Player();
            p.Nickname = nickname.Text;
            p.Password = password.Text;
            p.Name = name.Text;

            CtrlPlayer ctrlP = new CtrlPlayer();

            ctrlP.change(p);
        }

        protected void Button3_Click(object sender, EventArgs e)
        {
            Player p = new Player();
            p.Nickname = nickname.Text;
            p.Password = password.Text;
            p.Name = name.Text;

            CtrlPlayer ctrlP = new CtrlPlayer();

            ctrlP.delete(p);
        }

        protected void Button1_Click(object sender, EventArgs e)
        {
            Player p = new Player();
            p.Nickname = nickname.Text;
            p.Password = password.Text;
            p.Name = name.Text;

            CtrlPlayer ctrlP = new CtrlPlayer();

            ctrlP.insert(p);

        }
    }
}