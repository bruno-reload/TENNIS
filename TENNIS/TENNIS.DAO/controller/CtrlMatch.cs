using System;
using System.Data;
using System.Data.SqlClient;
using Tennis.DAO.controller;
using Tennis.DAO.model;

namespace Tennis.DAO.controller
{
    public class CtrlMatch: DAO
    {
        public void insert(Match match)
        {
            string sql = "INSERT INTO THE_MATCH (START_TIME, END_TIME , MATCH_NAME) VALUES (@START_TIME, @START_TIME, @MATCH_NAME);";

            _command = new SqlCommand(sql, Connect());

            _parameter = new SqlParameter("@START_TIME", match.Start);
            _parameter.SqlDbType = SqlDbType.Date;
            _command.Parameters.Add(_parameter);

            _parameter = new SqlParameter("@END_TIME ", match.End);
            _parameter.SqlDbType = SqlDbType.Time;
            _command.Parameters.Add(_parameter);

            _parameter = new SqlParameter("@MATCH_NAME", match.Name);
            _parameter.SqlDbType = SqlDbType.Int;
            _command.Parameters.Add(_parameter);

            _command.ExecuteNonQuery();
        }

        public void change(Match match)
        {
            string sql = "UPDATE THE_MATCH SET START_TIME = @START_TIME, END_TIME = @END_TIME, MATCH_NAME = @MATCH_NAME WHERE  ID  = @ID;";

            _command = new SqlCommand(sql, Connect());

            _parameter = new SqlParameter("@ID", match.Id);
            _parameter.SqlDbType = SqlDbType.Int;
            _command.Parameters.Add(_parameter);
            
            _parameter = new SqlParameter("@START_TIME", match.Start);
            _parameter.SqlDbType = SqlDbType.Date;
            _command.Parameters.Add(_parameter);

            _parameter = new SqlParameter("@END_TIME ", match.End);
            _parameter.SqlDbType = SqlDbType.Time;
            _command.Parameters.Add(_parameter);

            _parameter = new SqlParameter("@MATCH_NAME", match.Name);
            _parameter.SqlDbType = SqlDbType.Int;
            _command.Parameters.Add(_parameter);
            _command.ExecuteNonQuery();
        }

        public void delete(Match match)
        {
            string sql = "DELETE FROM THE_MATCH WHERE  ID = @ID;";

            _command = new SqlCommand(sql, Connect());

            _parameter = new SqlParameter("@ID", match.Id);
            _parameter.SqlDbType = SqlDbType.Int;
            _command.Parameters.Add(_parameter);

            _command.ExecuteNonQuery();
        }

        public Match getMatch(string id)
        {
            string sql = "SELECT DATE, TIME, IDLOCAL FROM THE_MATCH WHERE ID = @ID;";

            _command = new SqlCommand(sql, Connect());

            _parameter = new SqlParameter("@ID", id);
            _parameter.SqlDbType = SqlDbType.VarChar;
            _command.Parameters.Add(_parameter);

            _reader = _command.ExecuteReader();


            Match m = new Match();
            if (_reader.Read())
            {
                m.Id = int.Parse(id);
                m.Start = DateTime.Parse(_reader.GetValue(_reader.GetOrdinal("START_TIME")).ToString());
                m.End = DateTime.Parse(_reader.GetValue(_reader.GetOrdinal("END_TIME")).ToString());
                m.Name = _reader.GetValue(_reader.GetOrdinal("MATCH_NAME")).ToString();
            }

            return m;
        }
    }
}
