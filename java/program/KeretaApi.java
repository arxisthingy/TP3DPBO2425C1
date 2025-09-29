import java.util.ArrayList;
import java.util.List;


// Main Container Class
public class KeretaApi {
    private int kodeKeretaApi;
    private String namaKeretaApi;
    private List<Lokomotif> daftarLokomotif;
    private List<Gerbong> daftarGerbong;
    private Stasiun stasiunAsal;
    private Stasiun stasiunTujuan;

    // Default Constructor
    public KeretaApi() {
        this.kodeKeretaApi = 0;
        this.namaKeretaApi = "";
        this.daftarLokomotif = new ArrayList<>();
        this.daftarGerbong = new ArrayList<>();
        this.stasiunAsal = new Stasiun();
        this.stasiunTujuan = new Stasiun();
    }

    // Parameterized Constructor
    public KeretaApi(int kodeKeretaApi, String namaKeretaApi, List<Lokomotif> daftarLokomotif, List<Gerbong> daftarGerbong, Stasiun stasiunAsal, Stasiun stasiunTujuan) {
        this.kodeKeretaApi = kodeKeretaApi;
        this.namaKeretaApi = namaKeretaApi;
        this.daftarLokomotif = new ArrayList<>(daftarLokomotif);
        this.daftarGerbong = new ArrayList<>(daftarGerbong);
        this.stasiunAsal = stasiunAsal;
        this.stasiunTujuan = stasiunTujuan;
    }

    // Method to print KeretaApi information
    public void printInfo() {
        System.out.println("\n=== Info Kereta Api (" + this.kodeKeretaApi + ") " + this.namaKeretaApi + " ===");
        
        System.out.print("Lokomotif:");
        if (daftarLokomotif.isEmpty()) {
            System.out.println(" Tidak ada lokomotif");
        } else {
            System.out.println();
            for (Lokomotif lokomotif : daftarLokomotif) {
                System.out.println("  - " + lokomotif.getNamaSarana() + " (" + lokomotif.getKodeSarana() + ")");
            }
        }

        System.out.print("Gerbong:");
        if (daftarGerbong.isEmpty()) {
            System.out.println(" Tidak ada gerbong");
        } else {
            System.out.println();
            for (Gerbong gerbong : daftarGerbong) {
                System.out.println("  - " + gerbong.getNamaSarana() + " (" + gerbong.getKodeSarana() + ")");
            }
        }

        if (stasiunAsal.getKodeStasiun().isEmpty() || stasiunTujuan.getKodeStasiun().isEmpty()) {
            System.out.println("Stasiun Asal atau Stasiun Tujuan belum ditetapkan.");
        } else {
            System.out.println("Stasiun Asal: " + stasiunAsal.getNamaStasiun() + " (" + stasiunAsal.getKodeStasiun() + ")");
            System.out.println("Stasiun Tujuan: " + stasiunTujuan.getNamaStasiun() + " (" + stasiunTujuan.getKodeStasiun() + ")");
        }
    }

    // Add methods
    public void addLokomotif(Lokomotif lokomotif) {
        daftarLokomotif.add(lokomotif);
    }
    public void addGerbong(Gerbong gerbong) {
        daftarGerbong.add(gerbong);
    }
    public void addStasiunAsal(Stasiun stasiun) {
        this.stasiunAsal = stasiun;
    }
    public void addStasiunTujuan(Stasiun stasiun) {
        this.stasiunTujuan = stasiun;
    }

    // Getter and Setter methods
    public int getKodeKeretaApi() { return this.kodeKeretaApi; }
    public void setKodeKeretaApi(int kodeKeretaApi) { this.kodeKeretaApi = kodeKeretaApi; }
    public String getNamaKeretaApi() { return this.namaKeretaApi; }
    public void setNamaKeretaApi(String namaKeretaApi) { this.namaKeretaApi = namaKeretaApi; }
    public Stasiun getStasiunAsal() { return this.stasiunAsal; }
    public void setStasiunAsal(Stasiun stasiunAsal) { this.stasiunAsal = stasiunAsal; }
    public Stasiun getStasiunTujuan() { return this.stasiunTujuan; }
    public void setStasiunTujuan(Stasiun stasiunTujuan) { this.stasiunTujuan = stasiunTujuan; }
}