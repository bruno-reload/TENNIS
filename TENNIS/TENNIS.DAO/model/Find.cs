namespace Tennis.DAO.model
{
    public class Find
    {
        public int Id { get; set; }
        public int Points { get; set; }
        public bool Winner { get; set; }
        public Challeng Challeng { get; set; }
    }
}
