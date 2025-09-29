public class Lokomotif extends SaranaKereta {
    // Attributes
    private Mesin jenisMesin;
    private String konfigurasiGandar;
    private String jenisMotorTraksi;

    // Default Constructor
    public Lokomotif(){
        super();
        this.jenisMesin = new Mesin();
        this.konfigurasiGandar = "";
        this.jenisMotorTraksi = "";
    }

    // Parameterized Constructor
    public Lokomotif(String kodeSarana, String namaSarana, int beratSarana, String tipeBogie, Mesin jenisMesin, String konfigurasiGandar, String jenisMotorTraksi) {
        super(kodeSarana, namaSarana, beratSarana, tipeBogie);
        this.jenisMesin = jenisMesin;
        this.konfigurasiGandar = konfigurasiGandar;
        this.jenisMotorTraksi = jenisMotorTraksi;
    }

    // Method to print info
    public void printInfo() {
        System.out.println("\n=== Info Lokomotif (" + this.getKodeSarana() + ") " + this.getNamaSarana() + " ===");
        System.out.println("Berat Sarana: " + this.getBeratSarana() + " kg");
        System.out.println("Tipe Bogie: " + this.getTipeBogie());
        System.out.println("Jenis Mesin: " + this.jenisMesin.getTipeMesin() + ", Daya: " + this.jenisMesin.getDayaMesin() + " HP, Silinder: " + this.jenisMesin.getSilinder());
        System.out.println("Konfigurasi Gandar: " + this.konfigurasiGandar);
        System.out.println("Jenis Motor Traksi: " + this.jenisMotorTraksi);
    }

    // Getter and Setter for jenisMesin
    public Mesin getJenisMesin() {return this.jenisMesin;}
    public void setJenisMesin(Mesin mesin) {this.jenisMesin = mesin;}

    // Getter and Setter for konfigurasiGandar
    public String getKonfigurasiGandar() {return this.konfigurasiGandar;}
    public void setKonfigurasiGandar(String konfigurasi) {this.konfigurasiGandar = konfigurasi;}
    
    // Getter and Setter for jenisMotorTraksi
    public String getJenisMotorTraksi() {return this.jenisMotorTraksi;}
    public void setJenisMotorTraksi(String jenis) {this.jenisMotorTraksi = jenis;}
}