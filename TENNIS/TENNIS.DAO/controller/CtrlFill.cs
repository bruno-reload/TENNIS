using System.Collections.Generic;
using System.Data;
using System.Data.SqlClient;
using Tennis.DAO.controller;
using Tennis.DAO.model;

namespace Tennis.DAO.controller
{
    public class CtrlFill : DAO
    {
        public void insert(Fill fill)
        {
            string sql = "INSERT INTO FILL (POSITION, PLAYER_NICKNAME , IDTEAM ) VALUES (@POSITION, @PLAYER_NICKNAME , @IDTEAM );";

            _command = new SqlCommand(sql, Connect());

            _parameter = new SqlParameter("@POSITION", fill.Position);
            _parameter.SqlDbType = SqlDbType.VarChar;
            _command.Parameters.Add(_parameter);

            _parameter = new SqlParameter("@PLAYER_NICKNAME", fill.player);
            _parameter.SqlDbType = SqlDbType.VarChar;
            _command.Parameters.Add(_parameter);

            _parameter = new SqlParameter("@IDTEAM", fill.Team);
            _parameter.SqlDbType = SqlDbType.Int;
            _command.Parameters.Add(_parameter);

            _command.ExecuteNonQuery();
        }

        public void change(Fill fill)
        {
            string sql = "UPDATE FILL SET POSITION = @POSITION, PLAYER_NICKNAME = @PLAYER_NICKNAME, IDTEAM = @IDTEAM WHERE  ID  = @ID;";

            _command = new SqlCommand(sql, Connect());


            _parameter = new SqlParameter("@ID", fill.Id);
            _parameter.SqlDbType = SqlDbType.Int;
            _command.Parameters.Add(_parameter);

            _parameter = new SqlParameter("@POSITION", fill.Position);
            _parameter.SqlDbType = SqlDbType.VarChar;
            _command.Parameters.Add(_parameter);

            _parameter = new SqlParameter("@PLAYER_NICKNAME", fill.player);
            _parameter.SqlDbType = SqlDbType.VarChar;
            _command.Parameters.Add(_parameter);

            _parameter = new SqlParameter("@IDTEAM", fill.Team);
            _parameter.SqlDbType = SqlDbType.Int;
            _command.Parameters.Add(_parameter);

            _command.ExecuteNonQuery();
        }

        public void delete(Fill fill)
        {
            string sql = "DELETE FROM FILL WHERE  ID  = @ID;";

            _command = new SqlCommand(sql, Connect());

            _parameter = new SqlParameter("@ID", fill.Id);
            _parameter.SqlDbType = SqlDbType.Int;
            _command.Parameters.Add(_parameter);

            _command.ExecuteNonQuery();
        }

        public Fill getFill(string id)
        {
            string sql = "SELECT FILL, POSITION, PLAYER_NICKNAME, IDTEAM FROM PLAYER WHERE NICKNAME = @NICKNAME;";

            _command = new SqlCommand(sql, Connect());

            _parameter = new SqlParameter("@NICKNAME", id);
            _parameter.SqlDbType = SqlDbType.VarChar;
            _command.Parameters.Add(_parameter);

            _reader = _command.ExecuteReader();


            Fill f = new Fill();
            if (_reader.Read())
            {
                f.Id = int.Parse(id);
                f.Position = _reader.GetValue(_reader.GetOrdinal("POSITION")).ToString();
                f.player = _reader.GetValue(_reader.GetOrdinal("PLAYER_NICKNAME")).ToString();
                f.Team = int.Parse(_reader.GetValue(_reader.GetOrdinal("IDTEAM")).ToString());
            }

            return f;
        }

        public List<Fill> getFillList()
        {
            string sql = "SELECT ID, POSITION, PLAYER_NICKNAME, IDTEAM FROM FILL;";

            _command = new SqlCommand(sql, Connect());
            
            _reader = _command.ExecuteReader();


            List<Fill> list = new List<Fill>();

            while (_reader.Read())
            {
                Fill f = new Fill();

                f.Id = int.Parse(_reader.GetValue(_reader.GetOrdinal("ID")).ToString());
                f.Position = _reader.GetValue(_reader.GetOrdinal("POSITION")).ToString();
                f.player = _reader.GetValue(_reader.GetOrdinal("PLAYER_NICKNAME")).ToString();
                f.Team = int.Parse(_reader.GetValue(_reader.GetOrdinal("IDTEAM")).ToString());

                list.Add(f);
            }

            return list;
        }
    }
}
