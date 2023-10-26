namespace Tennis.DAO.model
{
    public class Fill
    {
        public int Id { get; set; }
        public string Postion { get; set; }
        public Player player { get; set; }
        public Team Team { get; set; }

    }
}
