public class SaranaKereta {
    private String kodeSarana;
    private String namaSarana;
    private int beratSarana; // in kg
    private String tipeBogie;

    // Default Constructor
    public SaranaKereta() {
        this.kodeSarana = "";
        this.namaSarana = "";
        this.beratSarana = 0;
        this.tipeBogie = "";
    }

    // Parameterized Constructor
    public SaranaKereta(String kodeSarana, String namaSarana, int beratSarana, String tipeBogie) {
        this.kodeSarana = kodeSarana;
        this.namaSarana = namaSarana;
        this.beratSarana = beratSarana;
        this.tipeBogie = tipeBogie;
    }

    // Getter and Setter for kodeSarana
    public String getKodeSarana() {return this.kodeSarana;}
    public void setKodeSarana(String kode) {this.kodeSarana = kode;}

    // Getter and Setter for namaSarana
    public String getNamaSarana() {return this.namaSarana;}
    public void setNamaSarana(String nama) {this.namaSarana = nama;}

    // Getter and Setter for beratSarana
    public int getBeratSarana() {return this.beratSarana;}
    public void setBeratSarana(int berat) {this.beratSarana = berat;}

    // Getter and Setter for tipeBogie
    public String getTipeBogie() {return this.tipeBogie;}
    public void setTipeBogie(String tipeBogie) {this.tipeBogie = tipeBogie;}
}