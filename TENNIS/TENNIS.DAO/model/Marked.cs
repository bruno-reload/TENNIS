using System;

namespace Tennis.DAO.model
{
    [System.Serializable]
    public class Marked
    {
        public int Id { set; get; }
        public DateTime DateTime { set; get; }
        public int Local { set; get; }
    }
}
