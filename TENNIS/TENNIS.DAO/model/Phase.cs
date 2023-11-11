using System.Collections.Generic;

namespace Tennis.DAO.model
{
    [System.Serializable]
    public class Phase
    {
        public int Id { set; get; }
        public string Name { set; get; }
        public int MinPoints { set; get; }
        public Match Match;
        public List<int> Challengs;
    }
}
