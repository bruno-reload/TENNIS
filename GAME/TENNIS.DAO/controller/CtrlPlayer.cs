﻿using System.Data;
using System.Data.SqlClient;
using Tennis.DAO.controller;
using Tennis.DAO.model;

namespace Tennis.DAO.controller
{
    public class CtrlPlayer : DAO
    {
        public CtrlPlayer(SqlConnection sqcConnection):base(sqcConnection) { 
        }

        public CtrlPlayer():base() {
        }
        public void insert(Player player)
        {
            string sql = "INSERT INTO PLAYER (NICKNAME, PLAYER_NAME, PASSWORD) VALUES (@NICKNAME, @PLAYER_NAME, @PASSWORD);";

            _command = new SqlCommand(sql, Connect());

            _parameter = new SqlParameter("@NICKNAME", player.Nicknane);
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
            string sql = "UPDATE PLAYER SET PLAYER_NAME = @PLAYER_NAME, PASSWORD = @PASSWORD WHERE  NICKNAME  = @NICKNAME;";

            _command = new SqlCommand(sql, Connect());

            _parameter = new SqlParameter("@NICKNAME", player.Nicknane);
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

            _parameter = new SqlParameter("@NICKNAME", player.Nicknane);
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
                p.Nicknane = _reader.GetValue(_reader.GetOrdinal("NICKNAME")).ToString();
                p.Name = _reader.GetValue(_reader.GetOrdinal("PLAYER_NAME")).ToString();
                p.Password = _reader.GetValue(_reader.GetOrdinal("PASSWORD")).ToString();

            }

            return p;
        }
    }
}
