#pragma once
#include <iostream>
#include <vector>
#include "Lokomotif.cpp"
#include "Gerbong.cpp"
#include "StasiunPemberhentian.cpp"

// Class KeretaApi
class KeretaApi
{
// Attributes
private:
    int kodeKeretaApi;
    string namaKeretaApi;
    vector<Lokomotif> daftarLokomotif;
    vector<Gerbong> daftarGerbong;
    vector<StasiunPemberhentian> daftarStasiun;

public:
    // Default Constructor
    KeretaApi(){
        kodeKeretaApi = 0;
        namaKeretaApi = "";
        daftarLokomotif = vector<Lokomotif>();
        daftarGerbong = vector<Gerbong>();
        daftarStasiun = vector<StasiunPemberhentian>();
    }

    // Parameterized Constructor
    KeretaApi(int kodeKeretaApi, string namaKeretaApi, vector<Lokomotif> daftarLokomotif, vector<Gerbong> daftarGerbong, vector<StasiunPemberhentian> daftarStasiun){
        this->kodeKeretaApi = kodeKeretaApi;
        this->namaKeretaApi = namaKeretaApi;
        this->daftarLokomotif = daftarLokomotif;
        this->daftarGerbong = daftarGerbong;
        this->daftarStasiun = daftarStasiun;
    }
    // Method to print KeretaApi information
    void printInfo() {
        cout << endl;
        cout << "=== Info Kereta Api " << "(" << kodeKeretaApi << ") " << namaKeretaApi << " ===" << endl;
        cout << "Daftar Lokomotif:" << endl;
        for (const auto& lokomotif : daftarLokomotif) {
            cout << "  - " << lokomotif.getNamaSarana() << " (" << lokomotif.getKodeSarana() << ")" << endl;
        }
        cout << "Daftar Gerbong:" << endl;
        for (const auto& gerbong : daftarGerbong) {
            cout << "  - " << gerbong.getNamaSarana() << " (" << gerbong.getKodeSarana() << ")" << endl;
        }
        cout << "Daftar Stasiun Pemberhentian:" << endl;
        for (const auto& stasiun : daftarStasiun) {
            cout << "  - " << stasiun.getNamaStasiun() << " (" << stasiun.getKodeStasiun() << ")" << endl;
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
    void addStasiun(const StasiunPemberhentian& stasiun) {daftarStasiun.push_back(stasiun);}

    // Destructor
    ~KeretaApi(){}
};