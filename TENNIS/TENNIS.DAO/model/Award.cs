namespace Tennis.DAO.model
{
    [System.Serializable]
    public class Award
    {
        public int Id;
        public string Position;
        public string Value;
        public Match Match;
    }
}
