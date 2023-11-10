using System;
using System.Data;
using System.Data.SqlClient;
using Tennis.DAO.controller;
using Tennis.DAO.model;

namespace Tennis.DAO.controller
{
    public class CtrlChalleng : DAO
    {
        public void insert(Challeng challeng)
        {
            string sql = "INSERT INTO PLAYER (FINISHED , DURATCTION , IDPHASE) VALUES (@FINISHED , @DURATCTION , @IDPHASE);";

            _command = new SqlCommand(sql, Connect());

            _parameter = new SqlParameter("@FINISHED", challeng.Finished);
            _parameter.SqlDbType = SqlDbType.VarChar;
            _command.Parameters.Add(_parameter);

            _parameter = new SqlParameter("@DURATCTION", challeng.Duraction);
            _parameter.SqlDbType = SqlDbType.Date;
            _command.Parameters.Add(_parameter);

            _parameter = new SqlParameter("@IDPHASE", challeng.Phase.Id);
            _parameter.SqlDbType = SqlDbType.Int;
            _command.Parameters.Add(_parameter);

            _command.ExecuteNonQuery();
        }

        public void change(Challeng challeng)
        {
            string sql = "UPDATE CHALLENGS SET FINISHED = @FINISHED, DURATCTION = @DURATCTION, IDPHASE = @IDPHASE, IDMARKED = @IDMARKED WHERE  ID  = @ID;";

            _command = new SqlCommand(sql, Connect());

            _parameter = new SqlParameter("@ID", challeng.Id);
            _parameter.SqlDbType = SqlDbType.Int;
            _command.Parameters.Add(_parameter);

            _parameter = new SqlParameter("@FINISHED", challeng.Finished);
            _parameter.SqlDbType = SqlDbType.VarChar;
            _command.Parameters.Add(_parameter);

            _parameter = new SqlParameter("@DURATCTION", challeng.Duraction);
            _parameter.SqlDbType = SqlDbType.Date;
            _command.Parameters.Add(_parameter);

            _parameter = new SqlParameter("@IDPHASE", challeng.Phase.Id);
            _parameter.SqlDbType = SqlDbType.Int;
            _command.Parameters.Add(_parameter);

            _parameter = new SqlParameter("@IDMARKED", challeng.Marked.Id);
            _parameter.SqlDbType = SqlDbType.Int;
            _command.Parameters.Add(_parameter);

            _command.ExecuteNonQuery();
        }

        public void delete(Challeng challeng)
        {
            string sql = "DELETE FROM CHALLENGS WHERE  ID  = @ID;";

            _command = new SqlCommand(sql, Connect());

            _parameter = new SqlParameter("@ID", challeng.Id);
            _parameter.SqlDbType = SqlDbType.Int;
            _command.Parameters.Add(_parameter);

            _command.ExecuteNonQuery();
        }

        public Challeng getChalleng(string id)
        {
            string sql = "SELECT FINISHED , DURATCTION , IDPHASE, IDMARKED  FROM CHALLENGS WHERE ID = @ID;";

            _command = new SqlCommand(sql, Connect());

            _parameter = new SqlParameter("@ID", id);
            _parameter.SqlDbType = SqlDbType.VarChar;
            _command.Parameters.Add(_parameter);

            _reader = _command.ExecuteReader();


            Challeng c = new Challeng();
            if (_reader.Read())
            {
                c.Finished = bool.Parse(_reader.GetValue(_reader.GetOrdinal("FINISHED")).ToString());
                c.Duraction = DateTime.Parse(_reader.GetValue(_reader.GetOrdinal("DURATCTION")).ToString());
                c.Marked.Id = int.Parse(_reader.GetValue(_reader.GetOrdinal("IDMARKED")).ToString());
                c.Phase.Id = int.Parse(_reader.GetValue(_reader.GetOrdinal("PASSWORD")).ToString());
            }

            return c;
        }
    }
}
