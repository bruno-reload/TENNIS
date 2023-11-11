using System.Collections.Generic;
using System.Data;
using System.Data.SqlClient;
using Tennis.DAO.controller;
using Tennis.DAO.model;

namespace Tennis.DAO.controller
{
    public class CtrlLocal : DAO
    {
        public void insert(Local local)
        {
            string sql = "INSERT INTO LOCAL (NEIGHBORHOOD , STREET , CITY, ZIP_CODE ) VALUES (@NEIGHBORHOOD , @STREET , @CITY, @ZIP_CODE );";

            _command = new SqlCommand(sql, Connect());

            _parameter = new SqlParameter("@NEIGHBORHOOD ", local.Neighborhood);
            _parameter.SqlDbType = SqlDbType.VarChar;
            _command.Parameters.Add(_parameter);

            _parameter = new SqlParameter("@STREET ", local.Street);
            _parameter.SqlDbType = SqlDbType.VarChar;
            _command.Parameters.Add(_parameter);

            _parameter = new SqlParameter("@CITY ", local.City);
            _parameter.SqlDbType = SqlDbType.VarChar;
            _command.Parameters.Add(_parameter);

            _parameter = new SqlParameter("@ZIP_CODE ", local.ZipCode);
            _parameter.SqlDbType = SqlDbType.VarChar;
            _command.Parameters.Add(_parameter);

            _command.ExecuteNonQuery();
        }

        public void change(Local local)
        {
            string sql = "UPDATE LOCAL SET NEIGHBORHOOD = @NEIGHBORHOOD, STREET = @STREET, CITY = @CITY, ZIP_CODE = @ZIP_CODE WHERE  ID  = @ID;";

            _command = new SqlCommand(sql, Connect());

            _parameter = new SqlParameter("@ID", local.Id);
            _parameter.SqlDbType = SqlDbType.Int;
            _command.Parameters.Add(_parameter);

            _parameter = new SqlParameter("@NEIGHBORHOOD ", local.Neighborhood);
            _parameter.SqlDbType = SqlDbType.VarChar;
            _command.Parameters.Add(_parameter);

            _parameter = new SqlParameter("@STREET ", local.Street);
            _parameter.SqlDbType = SqlDbType.VarChar;
            _command.Parameters.Add(_parameter);

            _parameter = new SqlParameter("@CITY ", local.City);
            _parameter.SqlDbType = SqlDbType.VarChar;
            _command.Parameters.Add(_parameter);

            _parameter = new SqlParameter("@ZIP_CODE ", local.ZipCode);
            _parameter.SqlDbType = SqlDbType.VarChar;
            _command.Parameters.Add(_parameter);

            _command.ExecuteNonQuery();
        }

        public void delete(Local local)
        {
            string sql = "DELETE FROM LOCAL WHERE  ID = @ID;";

            _command = new SqlCommand(sql, Connect());

            _parameter = new SqlParameter("@ID", local.Id);
            _parameter.SqlDbType = SqlDbType.Int;
            _command.Parameters.Add(_parameter);

            _command.ExecuteNonQuery();
        }

        public Local getLocal(string id)
        {
            string sql = "SELECT NEIGHBORHOOD , STREET , CITY, ZIP_CODE FROM LOCAL WHERE ID = @ID;";

            _command = new SqlCommand(sql, Connect());

            _parameter = new SqlParameter("@ID", id);
            _parameter.SqlDbType = SqlDbType.VarChar;
            _command.Parameters.Add(_parameter);

            _reader = _command.ExecuteReader();


            Local l = new Local();
            if (_reader.Read())
            {
                l.Id = int.Parse(id);
                l.Neighborhood = _reader.GetValue(_reader.GetOrdinal("NEIGHBORHOOD")).ToString();
                l.Street = _reader.GetValue(_reader.GetOrdinal("STREET")).ToString();
                l.City = _reader.GetValue(_reader.GetOrdinal("CITY")).ToString();
                l.ZipCode = _reader.GetValue(_reader.GetOrdinal("ZIP_CODE")).ToString();
            }

            return l;
        }
        public List<Local> getLocalList()
        {
            string sql = "SELECT NEIGHBORHOOD , STREET , CITY, ZIP_CODE FROM LOCAL;";

            _command = new SqlCommand(sql, Connect());
            

            _reader = _command.ExecuteReader();

            List<Local> list = new List<Local>();

            while (_reader.Read())
            {
                Local l = new Local();

                l.Id = int.Parse(_reader.GetValue(_reader.GetOrdinal("ID")).ToString());
                l.Neighborhood = _reader.GetValue(_reader.GetOrdinal("NEIGHBORHOOD")).ToString();
                l.Street = _reader.GetValue(_reader.GetOrdinal("STREET")).ToString();
                l.City = _reader.GetValue(_reader.GetOrdinal("CITY")).ToString();
                l.ZipCode = _reader.GetValue(_reader.GetOrdinal("ZIP_CODE")).ToString();

                list.Add(l);
            }

            return list;
        }
    }
}
