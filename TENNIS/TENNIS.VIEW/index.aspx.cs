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

        protected void novo_Click(object sender, EventArgs e)
        {
         

        }
        protected void cadastrar_Click(object sender, EventArgs e)
        {
            Player p = new Player();
            p.Nicknane = nickname.Text;
            p.Password = password.Text;
            p.Name = name.Text;

            CtrlPlayer ctrlP = new CtrlPlayer();

            ctrlP.insert(p);
        }

        protected void excluir_Click(object sender, EventArgs e)
        {
            Player p = new Player();
            p.Nicknane = nickname.Text;
            p.Password = password.Text;
            p.Name = name.Text;

            CtrlPlayer ctrlP = new CtrlPlayer();

            ctrlP.delete(p);
        }

        protected void alterar_Click(object sender, EventArgs e)
        {
            Player p = new Player();
            p.Nicknane = nickname.Text;
            p.Password = password.Text;
            p.Name = name.Text;

            CtrlPlayer ctrlP = new CtrlPlayer();

            ctrlP.change(p);
        }
    }
}