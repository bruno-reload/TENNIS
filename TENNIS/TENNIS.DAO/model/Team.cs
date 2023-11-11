using System.Collections.Generic;
using System.Data;

namespace Tennis.DAO.model
{
    [System.Serializable]
    public class Team
    {
        public int Id { set; get; }
        public string Name { set; get; }
        public List<int> Historic;
    }
}
