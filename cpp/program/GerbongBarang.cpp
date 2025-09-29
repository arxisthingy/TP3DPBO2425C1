#pragma once
#include "Gerbong.cpp"

// Class GerbongBarang
class GerbongBarang : public Gerbong
{
private:
    int kapasitasAngkut; // kg
    string tipeKargo;

public:
    // Default Constructor
    GerbongBarang() : Gerbong() {
        kapasitasAngkut = 0;
        tipeKargo = "";
    }
    // Parameterized Constructor
    GerbongBarang(string kodSarana, string namaSarana, int beratSarana, string tipeBogie, Trainmark jenisTrainmark, int kapasitasAngkut, string tipeKargo) : Gerbong(kodSarana, namaSarana, beratSarana, tipeBogie, jenisTrainmark) {
        this->kapasitasAngkut = kapasitasAngkut;
        this->tipeKargo = tipeKargo;
    }

    // Method to print GerbongBarang information
    void printInfo() {
        cout << endl;
        cout << "=== Info Gerbong Barang " << "(" << getKodeSarana() << ") " << getNamaSarana() << " ===" << endl;
        cout << "Berat Sarana: " << getBeratSarana() << " kg" << endl;
        cout << "Tipe Bogie: " << getTipeBogie() << endl;
        cout << "Jenis Trainmark: " << getJenisTrainmark().getKodeTrainmark() << ", Kecepatan Maks: " << getJenisTrainmark().getKecepatanMaks() << " km/h" << endl;
        cout << "Kapasitas Angkut: " << kapasitasAngkut << " kg" << endl;
        cout << "Tipe Kargo: " << tipeKargo << endl;
    }

    // Getter and Setter for kapasitasAngkut
    int getKapasitasAngkut() const {return this->kapasitasAngkut;}
    void setKapasitasAngkut(int kapasitas) {this->kapasitasAngkut = kapasitas;}

    // Getter and Setter for tipeKargo
    string getTipeKargo() const {return this->tipeKargo;}
    void setTipeKargo(string tipeKargo) {this->tipeKargo = tipeKargo;}

    // Destructor
    ~GerbongBarang(){}
};