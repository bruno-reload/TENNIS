using System.Collections.Generic;
using System.Data;
using System.Data.SqlClient;
using Tennis.DAO.controller;
using Tennis.DAO.model;

namespace Tennis.DAO.controller
{
    public class CtrlTeam : DAO
    {
        public void insert(Team team)
        {
            string sql = "INSERT INTO TEAM (TEAM_NAME) VALUES (@TEAM_NAME);";

            _command = new SqlCommand(sql, Connect());

            _parameter = new SqlParameter("@TEAM_NAME", team.Name);
            _parameter.SqlDbType = SqlDbType.VarChar;
            _command.Parameters.Add(_parameter);

            _command.ExecuteNonQuery();
        }

        public void change(Team team)
        {
            string sql = "UPDATE TEAM SET TEAM_NAME = @TEAM_NAME WHERE  ID  = @ID;";

            _command = new SqlCommand(sql, Connect());
            
            _parameter = new SqlParameter("@ID", team.Id);
            _parameter.SqlDbType = SqlDbType.VarChar;
            _command.Parameters.Add(_parameter);

            _parameter = new SqlParameter("@TEAM_NAME", team.Name);
            _parameter.SqlDbType = SqlDbType.VarChar;
            _command.Parameters.Add(_parameter);

            _command.ExecuteNonQuery();
        }

        public void delete(Team team)
        {
            string sql = "DELETE FROM TEAM WHERE  ID  = @ID;";

            _command = new SqlCommand(sql, Connect());

            _parameter = new SqlParameter("@ID", team.Id);
            _parameter.SqlDbType = SqlDbType.Int;
            _command.Parameters.Add(_parameter);

            _command.ExecuteNonQuery();
        }

        public Team getTeam(string id)
        {
            string sql = "SELECT TEAM_NAME FROM TEAM WHERE ID = @ID;";

            _command = new SqlCommand(sql, Connect());

            _parameter = new SqlParameter("@ID", id);
            _parameter.SqlDbType = SqlDbType.VarChar;
            _command.Parameters.Add(_parameter);

            _reader = _command.ExecuteReader();


            Team t = new Team();
            if (_reader.Read())
            {
                t.Id = int.Parse(id);
                t.Name = _reader.GetValue(_reader.GetOrdinal("TEAM_NAME")).ToString();
                //o historico deve ser carregado através de querys e armazenado aqui todas as buscas que compartilharem da mesma team id

            }

            return t;
        }
        public Team getTeamByName(string id)
        {
            string sql = "SELECT * FROM TEAM WHERE TEAM_NAME = @TEAM_NAME;";

            _command = new SqlCommand(sql, Connect());

            _parameter = new SqlParameter("@TEAM_NAME", id);
            _parameter.SqlDbType = SqlDbType.VarChar;
            _command.Parameters.Add(_parameter);

            _reader = _command.ExecuteReader();


            Team t = new Team();
            if (_reader.Read())
            {
                t.Id = int.Parse(_reader.GetValue(_reader.GetOrdinal("ID")).ToString());
                t.Name = _reader.GetValue(_reader.GetOrdinal("TEAM_NAME")).ToString();
                //o historico deve ser carregado através de querys e armazenado aqui todas as buscas que compartilharem da mesma team id

            }

            return t;
        }

        public List<Team> getTeamList()
        {
            string sql = "SELECT ID, TEAM_NAME FROM TEAM;";

            _command = new SqlCommand(sql, Connect());

            _reader = _command.ExecuteReader();

            List<Team> list = new List<Team>();
            while (_reader.Read())
            {
                Team t = new Team();
                t.Id = int.Parse(_reader.GetValue(_reader.GetOrdinal("ID")).ToString());
                t.Name = _reader.GetValue(_reader.GetOrdinal("TEAM_NAME")).ToString();
                list.Add(t);
            }

            return list;
        }
    }
}
