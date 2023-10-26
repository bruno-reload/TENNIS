using System;

namespace Tennis.DAO.model
{
    public class Challeng
    {
        public int Id { get; set; }
        public bool Finished { get; set; }
        public DateTime Duraction { get; set; }
        public Marked Marked { get; set; }
    }
}
