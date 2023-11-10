using System;

namespace Tennis.DAO.model
{
    [System.Serializable]
    public class Challeng
    {
        public int Id;
        public bool Finished;
        public DateTime Duraction;
        public Marked Marked;
        public Phase Phase;
    }
}
