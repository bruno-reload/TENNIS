using System.Collections.Generic;

namespace Tennis.DAO.model
{
    [System.Serializable]
    public class Phase
    {
        public int Id;
        public string Name;
        public int MinPoints;
        public Match Match;
        public List<Challeng> Challengs;
    }
}
