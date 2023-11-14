using System.Collections.Generic;

namespace Tennis.DAO.model
{
    [System.Serializable]
    public class Phase
    {
        public int Id { set; get; }
        public string Name { set; get; }
        public int MinPoints { set; get; }
        public int Match { set; get; }
        public List<int> Challengs;
    }
}
