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
            string sql = "INSERT INTO AWARD (POSITION, VALUE, IDMATCH) VALUES (@POSITION, @VALUE, @IDMATCH);";

            _command = new SqlCommand(sql, Connect());
            
            _parameter = new SqlParameter("@POSITION", award.Position);
            _parameter.SqlDbType = SqlDbType.VarChar;
            _command.Parameters.Add(_parameter);

            _parameter = new SqlParameter("@VALUE", award.Value);
            _parameter.SqlDbType = SqlDbType.VarChar;
            _command.Parameters.Add(_parameter);

            _parameter = new SqlParameter("@IDMATCH", award.Match);
            _parameter.SqlDbType = SqlDbType.Int;
            _command.Parameters.Add(_parameter);

            _command.ExecuteNonQuery();
        }

        public void change(Award award)
        {
            string sql = "UPDATE AWARD SET IDMATCH = @IDMATCH, POSITION = @POSITION, VALUE = @VALUE WHERE  ID  = @ID;";

            _command = new SqlCommand(sql, Connect());


            _parameter = new SqlParameter("@ID", award.Id);
            _parameter.SqlDbType = SqlDbType.Int;
            _command.Parameters.Add(_parameter);

            _parameter = new SqlParameter("@IDMATCH", award.Match);
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

            _parameter = new SqlParameter("@ID", id);
            _parameter.SqlDbType = SqlDbType.Int;
            _command.Parameters.Add(_parameter);

            _reader = _command.ExecuteReader();


            Award a = new Award();
            if (_reader.Read())
            {
                a.Id = int.Parse(id);
                a.Position = _reader.GetValue(_reader.GetOrdinal("POSITION")).ToString();
                a.Value = _reader.GetValue(_reader.GetOrdinal("VALUE")).ToString();
                a.Match = int.Parse(_reader.GetValue(_reader.GetOrdinal("IDMATCH")).ToString());
            }

            return a;
        }
        public List<Award> getAwardList()
        {
            string sql = "SELECT POSITION, VALUE, IDMATCH FROM AWARD;";

            _command = new SqlCommand(sql, Connect());
            

            _reader = _command.ExecuteReader();

            List<Award> list = new List<Award>();

            if (_reader.Read())
            {
                Award a = new Award();

                a.Id = int.Parse(_reader.GetValue(_reader.GetOrdinal("ID")).ToString());
                a.Position = _reader.GetValue(_reader.GetOrdinal("POSITION")).ToString();
                a.Value = _reader.GetValue(_reader.GetOrdinal("VALUE")).ToString();
                a.Match = int.Parse(_reader.GetValue(_reader.GetOrdinal("IDMATCH")).ToString());

                list.Add(a);
            }

            return list;
        }
    }
}