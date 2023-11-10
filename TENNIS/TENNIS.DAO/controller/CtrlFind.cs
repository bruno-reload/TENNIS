using System.Data;
using System.Data.SqlClient;
using Tennis.DAO.controller;
using Tennis.DAO.model;

namespace Tennis.DAO.controller
{
    public class CtrlFind : DAO
    {
        public void insert(Find find)
        {
            string sql = "INSERT INTO FIND (POINTS , WINNER , IDTEAM, IDCHALLENGS ) VALUES(@POINTS , @WINNER , @IDTEAM, @IDCHALLENGS );";

            _command = new SqlCommand(sql, Connect());

            _parameter = new SqlParameter("@POINTS", find.Points);
            _parameter.SqlDbType = SqlDbType.Int;
            _command.Parameters.Add(_parameter);

            _parameter = new SqlParameter("@WINNER", find.Winner);
            _parameter.SqlDbType = SqlDbType.Bit;
            _command.Parameters.Add(_parameter);

            _parameter = new SqlParameter("@IDTEAM", find.Challeng.Id);
            _parameter.SqlDbType = SqlDbType.Int;
            _command.Parameters.Add(_parameter);

            _parameter = new SqlParameter("@IDCHALLENGS", find.team.Name);
            _parameter.SqlDbType = SqlDbType.VarChar;
            _command.Parameters.Add(_parameter);

            _command.ExecuteNonQuery();
        }

        public void change(Find find)
        {
            string sql = "UPDATE FIND SET POINTS = @POINTS, WINNER = @WINNER, IDTEAM = @IDTEAM, IDCHALLENGS = @IDCHALLENGS WHERE  ID  = @ID;";

            _command = new SqlCommand(sql, Connect());

            _parameter = new SqlParameter("@ID", find.Id);
            _parameter.SqlDbType = SqlDbType.Int;
            _command.Parameters.Add(_parameter);

            _parameter = new SqlParameter("@POINTS", find.Points);
            _parameter.SqlDbType = SqlDbType.Int;
            _command.Parameters.Add(_parameter);

            _parameter = new SqlParameter("@WINNER", find.Winner);
            _parameter.SqlDbType = SqlDbType.Bit;
            _command.Parameters.Add(_parameter);

            _parameter = new SqlParameter("@IDTEAM", find.Challeng.Id);
            _parameter.SqlDbType = SqlDbType.Int;
            _command.Parameters.Add(_parameter);

            _parameter = new SqlParameter("@IDCHALLENGS", find.team.Name);
            _parameter.SqlDbType = SqlDbType.VarChar;
            _command.Parameters.Add(_parameter);

            _command.ExecuteNonQuery();
        }

        public void delete(Find find)
        {
            string sql = "DELETE FROM FIND WHERE  ID = @ID;";

            _command = new SqlCommand(sql, Connect());

            _parameter = new SqlParameter("@ID", find.Id);
            _parameter.SqlDbType = SqlDbType.Int;
            _command.Parameters.Add(_parameter);

            _command.ExecuteNonQuery();
        }

        public Find getFind(string id)
        {
            string sql = "SELECT POINTS, WINNER, IDTEAM, IDCHALLENGS FROM FIND WHERE ID = @ID;";

            _command = new SqlCommand(sql, Connect());

            _parameter = new SqlParameter("@ID", id);
            _parameter.SqlDbType = SqlDbType.VarChar;
            _command.Parameters.Add(_parameter);

            _reader = _command.ExecuteReader();


            Find f = new Find();
            if (_reader.Read())
            {
                f.Points =int.Parse(_reader.GetValue(_reader.GetOrdinal("POINTS")).ToString());
                f.Winner = bool.Parse(_reader.GetValue(_reader.GetOrdinal("WINNER")).ToString());
                f.Challeng.Id = int.Parse(_reader.GetValue(_reader.GetOrdinal("IDCHALLENGS")).ToString());
                f.team.Name = _reader.GetValue(_reader.GetOrdinal("IDTEAM")).ToString();
            }

            return f;
        }
    }
}
