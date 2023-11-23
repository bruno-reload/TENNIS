using System;

namespace Tennis.DAO.model
{
    [System.Serializable]
    public class Challeng
    {
        public int Id { set; get; }
        public bool Finished { set; get; }
        public DateTime Duration { set; get; }
        public int? Marked { set; get; }
        public int Phase { set; get; }
    }
}
