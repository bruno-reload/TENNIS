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
            string sql = "INSERT INTO FIL (POSITION, PLAYER_NICKNAME , IDTEAM ) VALUES (@POSITION, @PLAYER_NICKNAME , @IDTEAM );";

            _command = new SqlCommand(sql, Connect());

            _parameter = new SqlParameter("@POSITION", fill.Postion);
            _parameter.SqlDbType = SqlDbType.VarChar;
            _command.Parameters.Add(_parameter);

            _parameter = new SqlParameter("@PLAYER_NICKNAME", fill.player.Nicknane);
            _parameter.SqlDbType = SqlDbType.VarChar;
            _command.Parameters.Add(_parameter);

            _parameter = new SqlParameter("@IDTEAM", fill.Team.Name);
            _parameter.SqlDbType = SqlDbType.VarChar;
            _command.Parameters.Add(_parameter);

            _command.ExecuteNonQuery();
        }

        public void change(Fill fill)
        {
            string sql = "UPDATE FILL SET POSITION = @POSITION, PLAYER_NICKNAME = @PLAYER_NICKNAME, IDTEAM = @IDTEAM WHERE  ID  = @ID;";

            _command = new SqlCommand(sql, Connect());

            _parameter = new SqlParameter("@POSITION", fill.Postion);
            _parameter.SqlDbType = SqlDbType.VarChar;
            _command.Parameters.Add(_parameter);

            _parameter = new SqlParameter("@PLAYER_NICKNAME", fill.player.Nicknane);
            _parameter.SqlDbType = SqlDbType.VarChar;
            _command.Parameters.Add(_parameter);

            _parameter = new SqlParameter("@IDTEAM", fill.Team.Name);
            _parameter.SqlDbType = SqlDbType.VarChar;
            _command.Parameters.Add(_parameter);

            _command.ExecuteNonQuery();
        }

        public void delete(Fill fill)
        {
            string sql = "DELETE FROM FILL WHERE  ID  = @ID;";

            _command = new SqlCommand(sql, Connect());

            _parameter = new SqlParameter("@ID", fill.Id);
            _parameter.SqlDbType = SqlDbType.VarChar;
            _command.Parameters.Add(_parameter);

            _command.ExecuteNonQuery();
        }

        public Fill getPlayer(string id)
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
                f.Postion = _reader.GetValue(_reader.GetOrdinal("POSITION")).ToString();
                f.player.Nicknane = _reader.GetValue(_reader.GetOrdinal("PLAYER_NICKNAME")).ToString();
                f.Team.Name = _reader.GetValue(_reader.GetOrdinal("IDTEAM")).ToString();
            }

            return f;
        }
    }
}
