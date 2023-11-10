using System;
using System.Collections.Generic;
using System.Data;
using System.Data.SqlClient;
using System.Linq;
using System.Web;
using Tennis.DAO.model;

namespace Tennis.DAO.controller
{
    public class CtrlAward : DAO
    {

        public void insert(Award award)
        {
            string sql = "INSERT INTO PLAYER (POSITION, VALUE, IDMATCH) VALUES (@POSITION, @VALUE, @IDMATCH);";

            _command = new SqlCommand(sql, Connect());
            
            _parameter = new SqlParameter("@POSITION", award.Position);
            _parameter.SqlDbType = SqlDbType.VarChar;
            _command.Parameters.Add(_parameter);

            _parameter = new SqlParameter("@VALUE", award.Value);
            _parameter.SqlDbType = SqlDbType.VarChar;
            _command.Parameters.Add(_parameter);

            _parameter = new SqlParameter("@IDMATCH", award.Match.Id);
            _parameter.SqlDbType = SqlDbType.Int;
            _command.Parameters.Add(_parameter);

            _command.ExecuteNonQuery();
        }

        public void change(Award award)
        {
            string sql = "UPDATE AWARD SET POSITION = @POSITION, VALUE = @VALUE WHERE  ID  = @ID;";

            _command = new SqlCommand(sql, Connect());

            _parameter = new SqlParameter("@IDMATCH", award.Match.Id);
            _parameter.SqlDbType = SqlDbType.Int;
            _command.Parameters.Add(_parameter);

            _parameter = new SqlParameter("@POSITION", award.Position);
            _parameter.SqlDbType = SqlDbType.VarChar;
            _command.Parameters.Add(_parameter);

            _parameter = new SqlParameter("@VALUE", award.Value);
            _parameter.SqlDbType = SqlDbType.VarChar;
            _command.Parameters.Add(_parameter);

            _command.ExecuteNonQuery();
        }

        public void delete(Award award)
        {
            string sql = "DELETE FROM AWARD WHERE ID  = @ID;";

            _command = new SqlCommand(sql, Connect());

            _parameter = new SqlParameter("@ID", award.Id);
            _parameter.SqlDbType = SqlDbType.Int;
            _command.Parameters.Add(_parameter);

            _command.ExecuteNonQuery();
        }

        public Award getAward(string id)
        {
            string sql = "SELECT POSITION, VALUE, IDMATCH FROM AWARD WHERE ID = @ID;";

            _command = new SqlCommand(sql, Connect());

            _parameter = new SqlParameter("@NICKNAME", id);
            _parameter.SqlDbType = SqlDbType.Int;
            _command.Parameters.Add(_parameter);

            _reader = _command.ExecuteReader();


            Award a = new Award();
            if (_reader.Read())
            {
                a.Id = int.Parse(id);
                a.Position = _reader.GetValue(_reader.GetOrdinal("POSITION")).ToString();
                a.Value = _reader.GetValue(_reader.GetOrdinal("VALUE")).ToString();
            }

            return a;
        }
    }
}