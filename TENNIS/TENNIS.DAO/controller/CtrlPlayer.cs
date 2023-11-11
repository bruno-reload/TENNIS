using System.Collections.Generic;
using System.Data;
using System.Data.SqlClient;
using Tennis.DAO.controller;
using Tennis.DAO.model;

namespace Tennis.DAO.controller
{
    public class CtrlPlayer : DAO
    {
        public void insert(Player player)
        {
            string sql = "INSERT INTO PLAYER (NICKNAME, PLAYER_NAME, PASSWORD) VALUES (@NICKNAME, @PLAYER_NAME, @PASSWORD);";

            _command = new SqlCommand(sql, Connect());

            _parameter = new SqlParameter("@NICKNAME", player.Nickname);
            _parameter.SqlDbType = SqlDbType.VarChar;
            _command.Parameters.Add(_parameter);

            _parameter = new SqlParameter("@PLAYER_NAME", player.Name);
            _parameter.SqlDbType = SqlDbType.VarChar;
            _command.Parameters.Add(_parameter);

            _parameter = new SqlParameter("@PASSWORD", player.Password);
            _parameter.SqlDbType = SqlDbType.VarChar;
            _command.Parameters.Add(_parameter);

            _command.ExecuteNonQuery();
        }

        public void change(Player player)
        {
            string sql = "UPDATE PLAYER SET PLAYER_NAME = @PLAYER_NAME, PASSWORD = @PASSWORD WHERE  NICKNAME = @NICKNAME;";

            _command = new SqlCommand(sql, Connect());

            _parameter = new SqlParameter("@NICKNAME", player.Nickname);
            _parameter.SqlDbType = SqlDbType.VarChar;
            _command.Parameters.Add(_parameter);

            _parameter = new SqlParameter("@PLAYER_NAME", player.Name);
            _parameter.SqlDbType = SqlDbType.VarChar;
            _command.Parameters.Add(_parameter);

            _parameter = new SqlParameter("@PASSWORD", player.Password);
            _parameter.SqlDbType = SqlDbType.VarChar;
            _command.Parameters.Add(_parameter);

            _command.ExecuteNonQuery();
        }

        public void delete(Player player)
        {
            string sql = "DELETE FROM PLAYER WHERE  NICKNAME  = @NICKNAME;";

            _command = new SqlCommand(sql, Connect());

            _parameter = new SqlParameter("@NICKNAME", player.Nickname);
            _parameter.SqlDbType = SqlDbType.VarChar;
            _command.Parameters.Add(_parameter);

            _command.ExecuteNonQuery();
        }

        public Player getPlayer(string id)
        {
            string sql = "SELECT NICKNAME, PLAYER_NAME, PASSWORD FROM PLAYER WHERE NICKNAME = @NICKNAME;";

            _command = new SqlCommand(sql, Connect());

            _parameter = new SqlParameter("@NICKNAME", id);
            _parameter.SqlDbType = SqlDbType.VarChar;
            _command.Parameters.Add(_parameter);

            _reader = _command.ExecuteReader();


            Player p = new Player();
            if (_reader.Read())
            {
                p.Nickname = _reader.GetValue(_reader.GetOrdinal("NICKNAME")).ToString();
                p.Name = _reader.GetValue(_reader.GetOrdinal("PLAYER_NAME")).ToString();
                p.Password = _reader.GetValue(_reader.GetOrdinal("PASSWORD")).ToString();
            }

            return p;
        }

        public List<Player> getPlayerList()
        {
            string sql = "SELECT NICKNAME, PLAYER_NAME, PASSWORD FROM PLAYER;";

            _command = new SqlCommand(sql, Connect());
            

            _reader = _command.ExecuteReader();


            List<Player> list = new List<Player>();
            while(_reader.Read())
            {
                Player p = new Player();
                p.Nickname = _reader.GetValue(_reader.GetOrdinal("NICKNAME")).ToString();
                p.Name = _reader.GetValue(_reader.GetOrdinal("PLAYER_NAME")).ToString();
                p.Password = _reader.GetValue(_reader.GetOrdinal("PASSWORD")).ToString();
                list.Add(p);
            }

            return list;
        }
    }
}
