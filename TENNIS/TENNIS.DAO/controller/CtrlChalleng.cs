using System;
using System.Collections.Generic;
using System.Data;
using System.Data.SqlClient;
using System.Diagnostics;
using Tennis.DAO.controller;
using Tennis.DAO.model;

namespace Tennis.DAO.controller
{
    public class CtrlChalleng : DAO
    {
        public void insert(Challeng challeng)
        {
            string sql = "INSERT INTO CHALLENGS (FINISHED , DURATION , IDPHASE, IDMARKED ) VALUES (@FINISHED , @DURATION , @IDPHASE, @IDMARKED );";

            _command = new SqlCommand(sql, Connect());

            _parameter = new SqlParameter("@FINISHED", challeng.Finished);
            _parameter.SqlDbType = SqlDbType.Bit;
            _command.Parameters.Add(_parameter);

            _parameter = new SqlParameter("@DURATION", challeng.Duration.TimeOfDay);
            _parameter.SqlDbType = SqlDbType.Time;
            _command.Parameters.Add(_parameter);

            _parameter = new SqlParameter("@IDPHASE", challeng.Phase);
            _parameter.SqlDbType = SqlDbType.Int;
            _command.Parameters.Add(_parameter);

            _parameter = new SqlParameter("@IDMARKED", challeng.Marked);
            _parameter.SqlDbType = SqlDbType.Int;
            _command.Parameters.Add(_parameter);

            _command.ExecuteNonQuery();
        }

        public void change(Challeng challeng)
        {
            string sql = "UPDATE CHALLENGS SET FINISHED = @FINISHED, DURATION = @DURATION, IDPHASE = @IDPHASE, IDMARKED = @IDMARKED WHERE  ID  = @ID;";

            _command = new SqlCommand(sql, Connect());

            _parameter = new SqlParameter("@ID", challeng.Id);
            _parameter.SqlDbType = SqlDbType.Int;
            _command.Parameters.Add(_parameter);

            _parameter = new SqlParameter("@FINISHED", challeng.Finished);
            _parameter.SqlDbType = SqlDbType.Bit;
            _command.Parameters.Add(_parameter);

            _parameter = new SqlParameter("@DURATION", challeng.Duration.TimeOfDay);
            _parameter.SqlDbType = SqlDbType.Time;
            _command.Parameters.Add(_parameter);

            _parameter = new SqlParameter("@IDPHASE", challeng.Phase);
            _parameter.SqlDbType = SqlDbType.Int;
            _command.Parameters.Add(_parameter);

            _parameter = new SqlParameter("@IDMARKED", challeng.Marked);
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
            string sql = "SELECT ID, FINISHED , DURATION , IDPHASE, IDMARKED  FROM CHALLENGS WHERE ID = @ID;";

            _command = new SqlCommand(sql, Connect());

            _parameter = new SqlParameter("@ID", id);
            _parameter.SqlDbType = SqlDbType.VarChar;
            _command.Parameters.Add(_parameter);

            _reader = _command.ExecuteReader();


            Challeng c = new Challeng();
            if (_reader.Read())
            {

                c.Id = int.Parse(_reader.GetValue(_reader.GetOrdinal("ID")).ToString());
                c.Finished = bool.Parse(_reader.GetValue(_reader.GetOrdinal("FINISHED")).ToString());
                c.Duration = DateTime.Parse(_reader.GetValue(_reader.GetOrdinal("DURATION")).ToString());
                int outValue = 0;
                if (int.TryParse(_reader.GetValue(_reader.GetOrdinal("IDMARKED")).ToString(), out outValue))
                {
                    c.Marked = outValue;
                }
                c.Phase = int.Parse(_reader.GetValue(_reader.GetOrdinal("IDPHASE")).ToString());
            }

            return c;
        }
        public List<Challeng> getChallengList()
        {
            string sql = "SELECT ID, FINISHED , DURATION , IDPHASE, IDMARKED  FROM CHALLENGS;";

            _command = new SqlCommand(sql, Connect());
           

            _reader = _command.ExecuteReader();


            List<Challeng> list = new List<Challeng>();

            while (_reader.Read())
            {
                Challeng c = new Challeng();

                c.Id = int.Parse(_reader.GetValue(_reader.GetOrdinal("ID")).ToString());
                c.Finished = bool.Parse(_reader.GetValue(_reader.GetOrdinal("FINISHED")).ToString());
                c.Duration = DateTime.Parse(_reader.GetValue(_reader.GetOrdinal("DURATION")).ToString());
                int  outValue = 0;
                if (int.TryParse(_reader.GetValue(_reader.GetOrdinal("IDMARKED")).ToString(), out outValue))
                {
                    c.Marked = outValue;
                }
                c.Phase = int.Parse(_reader.GetValue(_reader.GetOrdinal("IDPHASE")).ToString());

                list.Add(c);
            }

            return list;
        }
    }
}
