#include "KeretaApi.cpp"
#include "GerbongBarang.cpp"
#include "GerbongPenumpang.cpp"
#include "Stasiun.cpp"
#include <iostream>
#include <vector>

// Function to check and print trainmarks
void checkTrainmark(const std::vector<Trainmark> &daftarTrainmark)
{
    cout << endl;
    // Check if daftarTrainmark is empty
    if (daftarTrainmark.empty())
    {
        std::cout << "Daftar trainmark kosong." << std::endl;
        return;
    }

    // Print daftarTrainmarkc
    else
    {
        std::cout << "Daftar Trainmark:" << std::endl;
        for (const auto &tm : daftarTrainmark)
        {
            std::cout << "Trainmark Kode: " << tm.getKodeTrainmark() << ", Kecepatan Maks: " << tm.getKecepatanMaks() << " km/h" << std::endl;
        }
    }
}

void checkStasiun(const std::vector<Stasiun> &daftarStasiun)
{
    cout << endl;
    // Check if daftarStasiun is empty
    if (daftarStasiun.empty())
    {
        std::cout << "Daftar stasiun kosong." << std::endl;
        return;
    }

    // Print daftarStasiun
    else
    {
        std::cout << "Daftar Stasiun:" << std::endl;
        for (auto &stasiun : daftarStasiun)
        {
            stasiun.printInfo();
        }
    }
}

int main()
{
    KeretaApi kereta;
    // Trainmark
    Trainmark trainmarkF('F', 120);
    Trainmark trainmarkE('E', 100);
    Trainmark trainmarkD('D', 90);
    Trainmark trainmarkC('C', 80);

    vector<Trainmark> daftarTrainmark;

    checkTrainmark(daftarTrainmark); // Should indicate the list is empty

    daftarTrainmark.push_back(trainmarkF);
    daftarTrainmark.push_back(trainmarkE);
    daftarTrainmark.push_back(trainmarkD);
    daftarTrainmark.push_back(trainmarkC);  

    checkTrainmark(daftarTrainmark); // Should print all trainmarks

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

    // Check and print Stasiun
    checkStasiun(daftarStasiun); // Should indicate the list is empty

    // Stasiun
    vector<Stasiun> daftarStasiun;
    Stasiun BL("BL", "Blitar", "Kelas Besar Tipe A");
    Stasiun PSE("PSE", "Pasar Senen", "Kelas Besar Tipe A");
    daftarStasiun.push_back(BL);
    daftarStasiun.push_back(PSE);

    // Check and print Stasiun
    checkStasiun(daftarStasiun);

    // Kereta Api
    vector<KeretaApi> daftarKeretaApi;

    // Add Kereta Api
    kereta.setKodeKeretaApi(112);
    kereta.setNamaKeretaApi("Brantas");
    
    kereta.printInfo();
    kereta.addLokomotif(lokomotif1);
    kereta.printInfo();
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

    kereta.printInfo();
    // Add Stasiun Asal and Tujuan
    kereta.addStasiunAsal(BL);
    kereta.addStasiunTujuan(PSE);

    kereta.printInfo();
}
