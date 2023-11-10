namespace Tennis.DAO.model
{
    [System.Serializable]
    public class Find
    {
        public int Id;
        public int Points;
        public bool Winner;
        public Challeng Challeng;
        public Team team;
    }
}
