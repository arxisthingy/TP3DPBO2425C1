#pragma once
#include <iostream>
#include <vector>
#include "Lokomotif.cpp"
#include "Stasiun.cpp"
#include "Gerbong.cpp"

// Class KeretaApi
class KeretaApi
{
// Attributes
private:
    int kodeKeretaApi;
    string namaKeretaApi;
    vector<Lokomotif> daftarLokomotif;
    vector<Gerbong> daftarGerbong;
    Stasiun stasiunAsal;
    Stasiun stasiunTujuan;

public:
    // Default Constructor
    KeretaApi(){
        kodeKeretaApi = 0;
        namaKeretaApi = "";
        daftarLokomotif = vector<Lokomotif>();
        daftarGerbong = vector<Gerbong>();
        stasiunAsal = Stasiun();
        stasiunTujuan = Stasiun();
    }

    // Parameterized Constructor
    KeretaApi(int kodeKeretaApi, string namaKeretaApi, vector<Lokomotif> daftarLokomotif, vector<Gerbong> daftarGerbong, Stasiun stasiunAsal, Stasiun stasiunTujuan){
        this->kodeKeretaApi = kodeKeretaApi;
        this->namaKeretaApi = namaKeretaApi;
        this->daftarLokomotif = daftarLokomotif;
        this->daftarGerbong = daftarGerbong;
        this->stasiunAsal = stasiunAsal;
        this->stasiunTujuan = stasiunTujuan;
    }
    // Method to print KeretaApi information
    void printInfo() {
        cout << endl;
        cout << "=== Info Kereta Api " << "(" << kodeKeretaApi << ") " << namaKeretaApi << " ===" << endl;
        cout << "Daftar Lokomotif:" << endl;

        // Check if daftarLokomotif is empty
        if (daftarLokomotif.empty()) {
            cout << "  - Tidak ada lokomotif terpasang." << endl;
        }
        else
        {
            // Print daftarLokomotif
            for (const auto& lokomotif : daftarLokomotif) {
                cout << "  - " << lokomotif.getNamaSarana() << " (" << lokomotif.getKodeSarana() << ")" << endl;
            }
        }

        // Check if daftarGerbong is empty
        if (daftarGerbong.empty()) {
            cout << "Daftar Gerbong: Tidak ada gerbong terpasang." << endl;
        }
        else
        {
            // Print daftarGerbong
            cout << "Daftar Gerbong:" << endl;
            for (const auto& gerbong : daftarGerbong) {
                cout << "  - " << gerbong.getNamaSarana() << " (" << gerbong.getKodeSarana() << ")" << endl;
            }
        }

        // Check if stasiunAsal or stasiunTujuan is not set
        if (stasiunAsal.getKodeStasiun() == "" || stasiunTujuan.getKodeStasiun() == "") {
            cout << "Stasiun Asal atau Stasiun Tujuan belum ditetapkan." << endl;
            return;
        }
        else
        {
            cout << "Stasiun Asal: " << stasiunAsal.getNamaStasiun() << " (" << stasiunAsal.getKodeStasiun() << ")" << endl;
            cout << "Stasiun Tujuan: " << stasiunTujuan.getNamaStasiun() << " (" << stasiunTujuan.getKodeStasiun() << ")" << endl;
        }
    }

    // Getter and Setter for kodeKeretaApi
    int getKodeKeretaApi() const {return this->kodeKeretaApi;}
    void setKodeKeretaApi(int kodeKeretaApi) {this->kodeKeretaApi = kodeKeretaApi;}

    // Getter and Setter for namaKeretaApi
    string getNamaKeretaApi() const {return this->namaKeretaApi;}
    void setNamaKeretaApi(string namaKeretaApi) {this->namaKeretaApi = namaKeretaApi;}

    // Getter for daftarLokomotif
    void addLokomotif(const Lokomotif& lokomotif) {daftarLokomotif.push_back(lokomotif);}
    void addGerbong(const Gerbong& gerbong) {daftarGerbong.push_back(gerbong);}
    void addStasiunAsal(const Stasiun& stasiun) {stasiunAsal = stasiun;}
    void addStasiunTujuan(const Stasiun& stasiun) {stasiunTujuan = stasiun;}

    // Destructor
    ~KeretaApi(){}
};