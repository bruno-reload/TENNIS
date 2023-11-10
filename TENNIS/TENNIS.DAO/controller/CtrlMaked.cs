using System;
using System.Data;
using System.Data.SqlClient;
using Tennis.DAO.controller;
using Tennis.DAO.model;

namespace Tennis.DAO.controller
{
    public class CtrlMarked : DAO
    {
        public void insert(Marked marked)
        {
            string sql = "INSERT INTO MARKED (DATE  , TIME  , IDLOCAL) VALUES (@DATE  , @TIME  , @IDLOCAL);";

            _command = new SqlCommand(sql, Connect());

            _parameter = new SqlParameter("@DATE", marked.DateTime.Date);
            _parameter.SqlDbType = SqlDbType.Date;
            _command.Parameters.Add(_parameter);

            _parameter = new SqlParameter("@TIME", marked.DateTime.TimeOfDay);
            _parameter.SqlDbType = SqlDbType.Time;
            _command.Parameters.Add(_parameter);

            _parameter = new SqlParameter("@IDLOCAL", marked.Local.Id);
            _parameter.SqlDbType = SqlDbType.Int;
            _command.Parameters.Add(_parameter);

            _command.ExecuteNonQuery();
        }

        public void change(Marked marked)
        {
            string sql = "UPDATE MARKED SET DATE = @DATE, TIME = @TIME, IDLOCAL = @IDLOCAL WHERE  ID  = @ID;";

            _command = new SqlCommand(sql, Connect());

            _parameter = new SqlParameter("@ID", marked.Id);
            _parameter.SqlDbType = SqlDbType.Int;
            _command.Parameters.Add(_parameter);

            _parameter = new SqlParameter("@DATE", marked.DateTime.Date);
            _parameter.SqlDbType = SqlDbType.Date;
            _command.Parameters.Add(_parameter);

            _parameter = new SqlParameter("@TIME", marked.DateTime.TimeOfDay);
            _parameter.SqlDbType = SqlDbType.Time;
            _command.Parameters.Add(_parameter);

            _parameter = new SqlParameter("@IDLOCAL", marked.Local.Id);
            _parameter.SqlDbType = SqlDbType.Int;
            _command.Parameters.Add(_parameter);

            _command.ExecuteNonQuery();
        }

        public void delete(Marked marked)
        {
            string sql = "DELETE FROM MARKED WHERE  ID = @ID;";

            _command = new SqlCommand(sql, Connect());

            _parameter = new SqlParameter("@ID", marked.Id);
            _parameter.SqlDbType = SqlDbType.Int;
            _command.Parameters.Add(_parameter);

            _command.ExecuteNonQuery();
        }

        public Marked getPlayer(string id)
        {
            string sql = "SELECT DATE, TIME, IDLOCAL FROM MARKED WHERE ID = @ID;";

            _command = new SqlCommand(sql, Connect());

            _parameter = new SqlParameter("@ID", id);
            _parameter.SqlDbType = SqlDbType.VarChar;
            _command.Parameters.Add(_parameter);

            _reader = _command.ExecuteReader();


            Marked m = new Marked();
            if (_reader.Read())
            {
                var time = DateTime.Parse(_reader.GetValue(_reader.GetOrdinal("TIME")).ToString()).TimeOfDay;
                var date = DateTime.Parse(_reader.GetValue(_reader.GetOrdinal("DATE")).ToString()).Date;
                m.DateTime = new DateTime(date.Year, date.Month, date.Day, time.Hours, time.Minutes, time.Milliseconds);
                m.Local.Id = int.Parse(_reader.GetValue(_reader.GetOrdinal("IDLOCAL ")).ToString());
            }

            return m;
        }
    }
}
