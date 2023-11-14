using Microsoft.Owin.Security;
using System;
using System.Configuration;
using System.Data.Common;
using System.Data.SqlClient;


namespace Tennis.DAO.controller
{
    public class DAO
    {
        protected SqlCommand _command;
        protected SqlDataReader _reader;
        protected SqlParameter _parameter;
        
        public SqlConnection Connect()
        {
            try
            {
                //string strConnection = ConfigurationManager.ConnectionStrings["Banco"].ConnectionString;
                string strConnection = "Data Source=DESKTOP-2KE21E2\\MSSQLSERVER01;Initial Catalog=TENNIS;Persist Security Info=True;User ID=Vivih_Athena;pwd=santuario0379";

                SqlConnection Connection  = new SqlConnection(strConnection);
                Connection.Open();
                return Connection;
            }
            catch (Exception ex)
            {
                Console.WriteLine(ex.Message);
            }
            return null;
        }
    }
}