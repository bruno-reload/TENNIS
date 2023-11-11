using System;
using System.Collections.Generic;

namespace Tennis.DAO.model
{
    [System.Serializable]
    public class Match
    {
        public int Id { get; set; }
        public DateTime Start { get; set; }
        public DateTime End { get; set; }
        public string Name { get; set; }
        public List<int> Phases;
        public List<int> Awards;
    }
}
