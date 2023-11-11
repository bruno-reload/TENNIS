namespace Tennis.DAO.model
{
    [System.Serializable]
    public class Award
    {
        public int Id { set; get; }
        public string Position { set; get; }
        public string Value { set; get; }
        public int Match { set; get; }
    }
}
