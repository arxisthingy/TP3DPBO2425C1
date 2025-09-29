public class GerbongBarang extends Gerbong {
    // Additional Attributes
    private int kapasitasAngkut; // in kg
    private String tipeKargo;

    // Default Constructor
    public GerbongBarang() {
        super();
        this.kapasitasAngkut = 0;
        this.tipeKargo = "";
    }

    // Parameterized Constructor
    public GerbongBarang(String kodeSarana, String namaSarana, int beratSarana, String tipeBogie, Trainmark jenisTrainmark, int kapasitasAngkut, String tipeKargo) {
        super(kodeSarana, namaSarana, beratSarana, tipeBogie, jenisTrainmark);
        this.kapasitasAngkut = kapasitasAngkut;
        this.tipeKargo = tipeKargo;
    }
    // Method to print GerbongBarang info
    public void printInfo() {
        System.out.println("\n=== Info Gerbong Barang (" + this.getKodeSarana() + ") " + this.getNamaSarana() + " ===");
        System.out.println("Berat Sarana: " + this.getBeratSarana() + " kg");
        System.out.println("Tipe Bogie: " + this.getTipeBogie());
        System.out.println("Jenis Trainmark: " + this.getJenisTrainmark().getKodeTrainmark() + ", Kecepatan Maks: " + this.getJenisTrainmark().getKecepatanMaks() + " km/h");
        System.out.println("Kapasitas Angkut: " + this.kapasitasAngkut + " kg");
        System.out.println("Tipe Kargo: " + this.tipeKargo);
    }

    // Getter and Setter for kapasitasAngkut
    public int getKapasitasAngkut() {return this.kapasitasAngkut;}
    public void setKapasitasAngkut(int kapasitas) {this.kapasitasAngkut = kapasitas;}

    // Getter and Setter for tipeKargo
    public String getTipeKargo() {return this.tipeKargo;}
    public void setTipeKargo(String tipe) {this.tipeKargo = tipe;}

}