namespace Tennis.DAO.model
{
    [System.Serializable]
    public class Find
    {
        public int Id { set; get; }
        public int Points { set; get; }
        public bool Winner { set; get; }
        public int Challeng { set; get; }
        public int team { set; get; }
    }
}
