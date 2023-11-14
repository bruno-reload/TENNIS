using System;
using System.Collections.Generic;
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
            string sql = "INSERT INTO MARKED (DATE, TIME, IDLOCAL) VALUES (@DATE, @TIME, @IDLOCAL);";

            _command = new SqlCommand(sql, Connect());

            _parameter = new SqlParameter("@DATE", marked.DateTime.Date);
            _parameter.SqlDbType = SqlDbType.Date;
            _command.Parameters.Add(_parameter);

            _parameter = new SqlParameter("@TIME", marked.DateTime.TimeOfDay);
            _parameter.SqlDbType = SqlDbType.Time;
            _command.Parameters.Add(_parameter);

            _parameter = new SqlParameter("@IDLOCAL", marked.Local);
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

            _parameter = new SqlParameter("@IDLOCAL", marked.Local);
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

        public Marked getMarked(string id)
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
                m.Id = int.Parse(id);
                m.DateTime = new DateTime(date.Year, date.Month, date.Day, time.Hours, time.Minutes, time.Milliseconds);
                m.Local = int.Parse(_reader.GetValue(_reader.GetOrdinal("IDLOCAL ")).ToString());
            }

            return m;
        }
        public List<Marked> getMarkedList()
        {
            string sql = "SELECT ID, DATE, TIME, IDLOCAL FROM MARKED;";

            _command = new SqlCommand(sql, Connect());
            

            _reader = _command.ExecuteReader();

            List<Marked> list = new List<Marked>();

            while (_reader.Read())
            {
                Marked m = new Marked();
                var Hour = DateTime.Parse(_reader.GetValue(_reader.GetOrdinal("TIME")).ToString()).Hour;
                var Minute = DateTime.Parse(_reader.GetValue(_reader.GetOrdinal("TIME")).ToString()).Minute;
                var Second = DateTime.Parse(_reader.GetValue(_reader.GetOrdinal("TIME")).ToString()).Second;
                var date = DateTime.Parse(_reader.GetValue(_reader.GetOrdinal("DATE")).ToString()).Date;
                m.Id = int.Parse(_reader.GetValue(_reader.GetOrdinal("ID")).ToString());
                m.DateTime = new DateTime(date.Year, date.Month, date.Day, Hour, Minute, Second);
                m.Local = int.Parse(_reader.GetValue(_reader.GetOrdinal("IDLOCAL")).ToString());
                list.Add(m);
            }

            return list;
        }
    }
}
