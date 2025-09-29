public class GerbongPenumpang extends Gerbong {
    // Attributes 
    private int kapasitasPenumpang;
    private String kelasLayanan;

    // Default Constructor
    public GerbongPenumpang() {
        super();
        this.kapasitasPenumpang = 0;
        this.kelasLayanan = "";
    }

    // Parameterized Constructor
    public GerbongPenumpang(String kodeSarana, String namaSarana, int beratSarana, String tipeBogie, Trainmark jenisTrainmark, int kapasitasPenumpang, String kelasLayanan) {
        super(kodeSarana, namaSarana, beratSarana, tipeBogie, jenisTrainmark);
        this.kapasitasPenumpang = kapasitasPenumpang;
        this.kelasLayanan = kelasLayanan;
    }

    // Method to print info
    public void printInfo() {
        System.out.println("\n=== Info Gerbong Penumpang (" + this.getKodeSarana() + ") " + this.getNamaSarana() + " ===");
        System.out.println("Berat Sarana: " + this.getBeratSarana() + " kg");
        System.out.println("Tipe Bogie: " + this.getTipeBogie());
        System.out.println("Jenis Trainmark: " + this.getJenisTrainmark().getKodeTrainmark() + ", Kecepatan Maks: " + this.getJenisTrainmark().getKecepatanMaks() + " km/h");
        System.out.println("Kapasitas Penumpang: " + this.kapasitasPenumpang + " orang");
        System.out.println("Kelas Layanan: " + this.kelasLayanan);
    }

    // Getter and Setter for kapasitasPenumpang
    public int getKapasitasPenumpang() {return this.kapasitasPenumpang;}
    public void setKapasitasPenumpang(int kapasitas) {this.kapasitasPenumpang = kapasitas;}

    // Getter and Setter for kelasLayanan
    public String getKelasLayanan() {return this.kelasLayanan;}
    public void setKelasLayanan(String kelas) {this.kelasLayanan = kelas;}
}