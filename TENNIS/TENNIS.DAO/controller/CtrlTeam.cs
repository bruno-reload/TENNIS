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
            }

            return t;
        }
    }
}
