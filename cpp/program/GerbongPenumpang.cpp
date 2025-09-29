#pragma once
#include <iostream>
#include "Gerbong.cpp"

// Class GerbongPenumpang
class GerbongPenumpang : public Gerbong
{
private:
    int kapasitasPenumpang; 
    string kelasLayanan;

public:
    // Default Constructor
    GerbongPenumpang() : Gerbong() {
        kapasitasPenumpang = 0;
        kelasLayanan = "";
    }

    // Parameterized Constructor
    GerbongPenumpang(string kodSarana, string namaSarana, int beratSarana, string tipeBogie, Trainmark jenisTrainmark, int kapasitasPenumpang, string kelasLayanan) : Gerbong(kodSarana, namaSarana, beratSarana, tipeBogie, jenisTrainmark) {
        this->kapasitasPenumpang = kapasitasPenumpang;
        this->kelasLayanan = kelasLayanan;
    }

    // Method to print GerbongPenumpang information
    void printInfo() {
        cout << endl;
        cout << "=== Info Gerbong Penumpang " << "(" << getKodeSarana() << ") " << getNamaSarana() << " ===" << endl;
        cout << "Berat Sarana: " << getBeratSarana() << " kg" << endl;
        cout << "Tipe Bogie: " << getTipeBogie() << endl;
        cout << "Jenis Trainmark: " << getJenisTrainmark().getKodeTrainmark() << ", Kecepatan Maks: " << getJenisTrainmark().getKecepatanMaks() << " km/h" << endl;
        cout << "Kapasitas Penumpang: " << kapasitasPenumpang << " orang" << endl;
        cout << "Kelas Layanan: " << kelasLayanan << endl;
    }

    // Getter and Setter for kapasitasPenumpang
    int getKapasitasPenumpang() const {return this->kapasitasPenumpang;}
    void setKapasitasPenumpang(int kapasitas) {this->kapasitasPenumpang = kapasitas;}

    // Getter and Setter for kelasLayanan
    string getKelasLayanan() const {return this->kelasLayanan;}
    void setKelasLayanan(string kelas) {this->kelasLayanan = kelas;}

    // Destructor
    ~GerbongPenumpang(){}
};