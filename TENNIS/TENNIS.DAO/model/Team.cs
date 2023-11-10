using System.Collections.Generic;
using System.Data;

namespace Tennis.DAO.model
{
    [System.Serializable]
    public class Team
    {
        public int Id;
        public string Name;
        public List<Find> Historic;
    }
}
