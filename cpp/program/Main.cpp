#include "KeretaApi.cpp"
#include "GerbongBarang.cpp"
#include "GerbongPenumpang.cpp"
#include <iostream>
#include <vector>

int main()
{
    KeretaApi kereta;
    // Trainmark
    Trainmark trainmarkF('F', 120);
    Trainmark trainmarkE('E', 100);
    Trainmark trainmarkD('D', 90);
    Trainmark trainmarkC('C', 80);

    vector<Trainmark> daftarTrainmark;
    daftarTrainmark.push_back(trainmarkF);
    daftarTrainmark.push_back(trainmarkE);
    daftarTrainmark.push_back(trainmarkD);
    daftarTrainmark.push_back(trainmarkC);

    cout << "Daftar Trainmark:" << std::endl;
    for (const auto& tm : daftarTrainmark) {
        std::cout << "Trainmark Kode: " << tm.getKodeTrainmark() << ", Kecepatan Maks: " << tm.getKecepatanMaks() << " km/h" << std::endl;
    }

    // Lokomotif
    Lokomotif lokomotif1("CC 201 89 16", "GE U18C", 78000, "BarataIndonesia CC", Mesin("GE 7FDL-8", 1950, 8), "Co-Co", "Diesel-Electric");
    lokomotif1.printInfo();

    // Gerbong
    GerbongPenumpang K100209("K1 0 02 09", "K1", 40000, "Bogie K8", trainmarkF, 50, "Eksekutif");
    K100209.printInfo();

    // Gerbong Barang
    GerbongBarang B00903("B 0 09 03", "B", 32000, "Bogie K5", trainmarkE, 20000, "Bagasi & Barang Serbaguna");
    B00903.printInfo();

    // Gerbong Barang 2
    GerbongBarang GD01104("GD 0 11 04", "Gerbong Datar", 15000, "Bogie Barber S-2", trainmarkC, 57000, "Petikemas");
    GD01104.printInfo();
    
    // Stasiun Pemberhentian
    StasiunPemberhentian BL("BL", "Blitar", "Kelas Besar Tipe A");
    BL.printInfo();

    // Kereta Api
    vector<KeretaApi> daftarKeretaApi;

    kereta.setKodeKeretaApi(112);
    kereta.setNamaKeretaApi("Brantas");
    kereta.addLokomotif(lokomotif1);
    kereta.addGerbong(K100209);
    kereta.addGerbong(GerbongPenumpang("K1 0 98 22", "K1", 40000, "Bogie K8", trainmarkF, 50, "Eksekutif"));
    kereta.addGerbong(GerbongPenumpang("K1 0 96 07", "K1", 40000, "Bogie K5", trainmarkE, 50, "Eksekutif"));
    kereta.addGerbong(GerbongPenumpang("MP3 0 16 05", "MP3", 42000, "Bogie K10", trainmarkF, 14, "Eksekutif"));
    kereta.addGerbong(GerbongPenumpang("K3 0 14 08", "K3", 37000, "Bogie K5", trainmarkE, 72, "Ekonomi NG"));
    kereta.addGerbong(GerbongPenumpang("K3 0 14 09", "K3", 37000, "Bogie K5", trainmarkE, 72, "Ekonomi NG"));
    kereta.addGerbong(GerbongPenumpang("K3 0 14 23", "K3", 37000, "Bogie K5", trainmarkE, 72, "Ekonomi NG"));
    kereta.addGerbong(GerbongPenumpang("K3 0 14 21", "K3", 37000, "Bogie K5", trainmarkE, 72, "Ekonomi NG"));
    kereta.addGerbong(GerbongPenumpang("K3 0 14 34", "K3", 37000, "Bogie K5", trainmarkE, 72, "Ekonomi NG"));
    kereta.addGerbong(B00903);

    kereta.addStasiun(StasiunPemberhentian("BL", "Blitar", "Kelas Besar Tipe A"));
    kereta.addStasiun(StasiunPemberhentian("NT", "Ngunut", "Kelas II"));
    kereta.addStasiun(StasiunPemberhentian("TA", "Tulungagung", "Kelas Besar Tipe C"));
    kereta.addStasiun(StasiunPemberhentian("KD", "Kediri", "Kelas Besar Tipe C"));
    kereta.addStasiun(StasiunPemberhentian("PPR", "Papar", "Kelas III"));
    kereta.addStasiun(StasiunPemberhentian("KTS", "Kertosono", "Kelas Besar Tipe B"));
    kereta.addStasiun(StasiunPemberhentian("NJ", "Nganjuk", "Kelas I"));
    kereta.addStasiun(StasiunPemberhentian("CRB", "Caruban", "Kelas II"));
    kereta.addStasiun(StasiunPemberhentian("MN", "Madiun", "Kelas Besar Tipe A"));
    kereta.addStasiun(StasiunPemberhentian("MGT", "Magetan", "Kelas III"));
    kereta.addStasiun(StasiunPemberhentian("NGW", "Ngawi", "Kelas II"));
    kereta.addStasiun(StasiunPemberhentian("WK", "Walikukun", "Kelas II"));
    kereta.addStasiun(StasiunPemberhentian("SR", "Sragen", "Kelas II"));
    kereta.addStasiun(StasiunPemberhentian("SK", "Solojebres", "Kelas Besar Tipe C"));
    kereta.addStasiun(StasiunPemberhentian("GD", "Gundih", "Kelas I"));
    kereta.addStasiun(StasiunPemberhentian("SMT", "Semarang Tawang", "Kelas Besar Tipe A"));
    kereta.addStasiun(StasiunPemberhentian("PK", "Pekalongan", "Kelas Besar Tipe C"));
    kereta.addStasiun(StasiunPemberhentian("TG", "Tegal", "Kelas Besar Tipe A"));
    kereta.addStasiun(StasiunPemberhentian("BB", "Brebes", "Kelas I"));
    kereta.addStasiun(StasiunPemberhentian("CNP", "Cirebon Prujakan", "Kelas Besar Tipe A"));
    kereta.addStasiun(StasiunPemberhentian("JTB", "Jatibarang", "Kelas Besar Tipe C"));
    kereta.addStasiun(StasiunPemberhentian("PGB", "Pegadenbaru", "Kelas II"));
    kereta.addStasiun(StasiunPemberhentian("BKS", "Bekasi", "Kelas Besar Tipe A"));
    kereta.addStasiun(StasiunPemberhentian("JNG", "Jatinegara", "Kelas Besar Tipe A"));
    kereta.addStasiun(StasiunPemberhentian("PSE", "Pasar Senen", "Kelas Besar Tipe A"));

    kereta.printInfo();
}
    