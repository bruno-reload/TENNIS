using System;
using System.Collections.Generic;
using System.Data;
using System.Data.SqlClient;
using Tennis.DAO.controller;
using Tennis.DAO.model;

namespace Tennis.DAO.controller
{
    public class CtrlPhase: DAO
    {
        public void insert(Phase phase)
        {
            string sql = "INSERT INTO PHASE (PHASE_NAME, MIN_POINTS, IDMATCH) VALUES (@PHASE_NAME, @MIN_POINTS, @IDMATCH);";

            _command = new SqlCommand(sql, Connect());

            _parameter = new SqlParameter("@PHASE_NAME", phase.Name);
            _parameter.SqlDbType = SqlDbType.VarChar;
            _command.Parameters.Add(_parameter);

            _parameter = new SqlParameter("@MIN_POINTS ", phase.MinPoints);
            _parameter.SqlDbType = SqlDbType.Int;
            _command.Parameters.Add(_parameter);

            _parameter = new SqlParameter("@IDMATCH", phase.Match);
            _parameter.SqlDbType = SqlDbType.Int;
            _command.Parameters.Add(_parameter);

            _command.ExecuteNonQuery();
        }

        public void change(Phase phase)
        {
            string sql = "UPDATE PHASE SET PHASE_NAME = @PHASE_NAME, MIN_POINTS = @MIN_POINTS, IDMATCH = @IDMATCH WHERE  ID  = @ID;";

            _command = new SqlCommand(sql, Connect());

            _parameter = new SqlParameter("@ID", phase.Id);
            _parameter.SqlDbType = SqlDbType.Int;
            _command.Parameters.Add(_parameter);

            _parameter = new SqlParameter("@PHASE_NAME", phase.Name);
            _parameter.SqlDbType = SqlDbType.VarChar;
            _command.Parameters.Add(_parameter);

            _parameter = new SqlParameter("@MIN_POINTS ", phase.MinPoints);
            _parameter.SqlDbType = SqlDbType.Int;
            _command.Parameters.Add(_parameter);

            _parameter = new SqlParameter("@IDMATCH", phase.Match);
            _parameter.SqlDbType = SqlDbType.Int;
            _command.Parameters.Add(_parameter);


            _command.ExecuteNonQuery();
        }

        public void delete(Phase phase)
        {
            string sql = "DELETE FROM PHASE WHERE  ID = @ID;";

            _command = new SqlCommand(sql, Connect());

            _parameter = new SqlParameter("@ID", phase.Id);
            _parameter.SqlDbType = SqlDbType.Int;
            _command.Parameters.Add(_parameter);

            _command.ExecuteNonQuery();
        }

        public Phase getPhase(string id)
        {
            string sql = "SELECT PHASE_NAME, MIN_POINTS, IDMATCH FROM PHASE WHERE ID = @ID;";

            _command = new SqlCommand(sql, Connect());

            _parameter = new SqlParameter("@ID", id);
            _parameter.SqlDbType = SqlDbType.VarChar;
            _command.Parameters.Add(_parameter);

            _reader = _command.ExecuteReader();


            Phase p = new Phase();
            if (_reader.Read())
            {
                p.Id = int.Parse(id);
                p.Name = _reader.GetValue(_reader.GetOrdinal("PHASE_NAME")).ToString();
                p.MinPoints = int.Parse(_reader.GetValue(_reader.GetOrdinal("MIN_POINTS")).ToString());
                p.Match = int.Parse(_reader.GetValue(_reader.GetOrdinal("IDMATCH")).ToString());

                //os desafios devem ser carregados através de querys e armazenados aqui todas as dispultas que compartilharem da mesma fase id
            }

            return p;
        }
        public List<Phase >getPhaseList()
        {
            string sql = "SELECT ID, PHASE_NAME, MIN_POINTS, IDMATCH FROM PHASE;";

            _command = new SqlCommand(sql, Connect());
            

            _reader = _command.ExecuteReader();


            List<Phase> list = new List<Phase>();

            while (_reader.Read())
            {
                Phase p = new Phase();
                p.Id = int.Parse(_reader.GetValue(_reader.GetOrdinal("ID")).ToString());
                p.Name = _reader.GetValue(_reader.GetOrdinal("PHASE_NAME")).ToString();
                p.MinPoints = int.Parse(_reader.GetValue(_reader.GetOrdinal("MIN_POINTS")).ToString());
                p.Match = int.Parse(_reader.GetValue(_reader.GetOrdinal("IDMATCH")).ToString());

                //os desafios devem ser carregados através de querys e armazenados aqui todas as dispultas que compartilharem da mesma fase id
                list.Add(p);
            }

            return list;
        }
    }
}
