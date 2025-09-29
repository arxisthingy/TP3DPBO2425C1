import java.util.ArrayList;
import java.util.List;

public class Main {
    
    // Function to check and print trainmarks
    public static void checkTrainmark(List<Trainmark> daftarTrainmark) {
        System.out.println();
        // Check if daftarTrainmark is empty
        if (daftarTrainmark.isEmpty()) {
            System.out.println("Daftar trainmark kosong.");
        }

        // Print daftarTrainmark
        else {
            System.out.println("Daftar Trainmark:");
            for (Trainmark tm : daftarTrainmark) {
                System.out.println("Trainmark Kode: " + tm.getKodeTrainmark() + ", Kecepatan Maks: " + tm.getKecepatanMaks() + " km/h");
            }
        }
    }

    public static void checkStasiun(List<Stasiun> daftarStasiun) {
        System.out.println();
        // Check if daftarStasiun is empty
        if (daftarStasiun.isEmpty()) {
            System.out.println("Daftar stasiun kosong.");
        }

        // Print daftarStasiun
        else {
            System.out.println("Daftar Stasiun:");
            for (Stasiun stasiun : daftarStasiun) {
                stasiun.printInfo();
            }
        }
    }

    public static void main(String[] args) {
        KeretaApi kereta = new KeretaApi();

        // Trainmark
        Trainmark trainmarkF = new Trainmark('F', 120);
        Trainmark trainmarkE = new Trainmark('E', 100);
        Trainmark trainmarkD = new Trainmark('D', 90);
        Trainmark trainmarkC = new Trainmark('C', 80);

        List<Trainmark> daftarTrainmark = new ArrayList<>();

        checkTrainmark(daftarTrainmark); // Should indicate the list is empty

        daftarTrainmark.add(trainmarkF);
        daftarTrainmark.add(trainmarkE);
        daftarTrainmark.add(trainmarkD);
        daftarTrainmark.add(trainmarkC);  

        checkTrainmark(daftarTrainmark); // Should print all trainmarks

        // Lokomotif
        Mesin mesin1 = new Mesin("GE 7FDL-8", 1950, 8);
        Lokomotif lokomotif1 = new Lokomotif("CC 201 89 16", "GE U18C", 78000, "BarataIndonesia CC", mesin1, "Co-Co", "Diesel-Electric");
        lokomotif1.printInfo();

        // Gerbong
        GerbongPenumpang K100209 = new GerbongPenumpang("K1 0 02 09", "K1", 40000, "Bogie K8", trainmarkF, 50, "Eksekutif");
        K100209.printInfo();

        // Gerbong Barang
        GerbongBarang B00903 = new GerbongBarang("B 0 09 03", "B", 32000, "Bogie K5", trainmarkE, 20000, "Bagasi & Barang Serbaguna");
        B00903.printInfo();

        // Gerbong Barang 2
        GerbongBarang GD01104 = new GerbongBarang("GD 0 11 04", "Gerbong Datar", 15000, "Bogie Barber S-2", trainmarkC, 57000, "Petikemas");
        GD01104.printInfo();

        // Stasiun
        List<Stasiun> daftarStasiun = new ArrayList<>(); 
        checkStasiun(daftarStasiun); // Should indicate the list is empty

        Stasiun BL = new Stasiun("BL", "Blitar", "Kelas Besar Tipe A");
        Stasiun PSE = new Stasiun("PSE", "Pasar Senen", "Kelas Besar Tipe A");
        daftarStasiun.add(BL);
        daftarStasiun.add(PSE);

        // Check and print Stasiun
        checkStasiun(daftarStasiun);

        // Kereta Api
        // List<KeretaApi> daftarKeretaApi = new ArrayList<>(); // Not used in C++ logic

        // Add Kereta Api Info
        kereta.setKodeKeretaApi(112);
        kereta.setNamaKeretaApi("Brantas");
        
        kereta.printInfo();
        kereta.addLokomotif(lokomotif1);
        kereta.printInfo();
        
        // Add Gerbong 
        kereta.addGerbong(K100209);
        kereta.addGerbong(new GerbongPenumpang("K1 0 98 22", "K1", 40000, "Bogie K8", trainmarkF, 50, "Eksekutif"));
        kereta.addGerbong(new GerbongPenumpang("K1 0 96 07", "K1", 40000, "Bogie K5", trainmarkE, 50, "Eksekutif"));
        kereta.addGerbong(new GerbongPenumpang("MP3 0 16 05", "MP3", 42000, "Bogie K10", trainmarkF, 14, "Eksekutif"));
        kereta.addGerbong(new GerbongPenumpang("K3 0 14 08", "K3", 37000, "Bogie K5", trainmarkE, 72, "Ekonomi NG"));
        kereta.addGerbong(new GerbongPenumpang("K3 0 14 09", "K3", 37000, "Bogie K5", trainmarkE, 72, "Ekonomi NG"));
        kereta.addGerbong(new GerbongPenumpang("K3 0 14 23", "K3", 37000, "Bogie K5", trainmarkE, 72, "Ekonomi NG"));
        kereta.addGerbong(new GerbongPenumpang("K3 0 14 21", "K3", 37000, "Bogie K5", trainmarkE, 72, "Ekonomi NG"));
        kereta.addGerbong(new GerbongPenumpang("K3 0 14 34", "K3", 37000, "Bogie K5", trainmarkE, 72, "Ekonomi NG"));
        kereta.addGerbong(B00903);

        kereta.printInfo();
        
        // Add Stasiun Asal and Tujuan
        kereta.addStasiunAsal(BL);
        kereta.addStasiunTujuan(PSE);

        kereta.printInfo();
    }
}