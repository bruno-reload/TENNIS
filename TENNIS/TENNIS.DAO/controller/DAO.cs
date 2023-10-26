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
                string strConnection = ConfigurationManager.ConnectionStrings["Banco"].ConnectionString;

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