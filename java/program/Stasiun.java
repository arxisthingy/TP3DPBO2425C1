public class Stasiun{
    // Attributes
    private String kodeStasiun;
    private String namaStasiun;
    private String tipeStasiun;

    // Default Constructor
    public Stasiun() {
        this.kodeStasiun = "";
        this.namaStasiun = "";
        this.tipeStasiun = "";
    }

    // Parameterized Constructor    
    public Stasiun(String kodeStasiun, String namaStasiun, String tipeStasiun) {
        this.kodeStasiun = kodeStasiun;
        this.namaStasiun = namaStasiun;
        this.tipeStasiun = tipeStasiun;
    }

    // Method to print stasiun info
    public void printInfo() {
        System.out.println("(" + kodeStasiun + ") " + namaStasiun + " - " + tipeStasiun);
    }

    // Getter and Setter for kodeStasiun
    public String getKodeStasiun() {return this.kodeStasiun;}
    public void setKodeStasiun(String kode) {this.kodeStasiun = kode;}

    // Getter and Setter for namaStasiun
    public String getNamaStasiun() {return this.namaStasiun;}
    public void setNamaStasiun(String nama) {this.namaStasiun = nama;}

    // Getter and Setter for tipeStasiun
    public String getTipeStasiun() {return this.tipeStasiun;}
    public void setTipeStasiun(String tipe) {this.tipeStasiun = tipe;}
}