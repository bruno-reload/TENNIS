using System.Collections.Generic;

namespace Tennis.DAO.model
{
    public class Phase
    {
        public int Id { get; set; }
        public string Name { get; set; }
        public static int MinPoints { get; set; }
        public List<Challeng> Challengs { get; set; }
    }
}
