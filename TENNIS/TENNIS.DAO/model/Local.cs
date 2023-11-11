namespace Tennis.DAO.model
{
    [System.Serializable]
    public class Local
    {
        public int Id { set; get; }
        public string Neighborhood { set; get; }
        public string Street { set; get; }
        public string City { set; get; }
        public string ZipCode { set; get; }
    }
}
