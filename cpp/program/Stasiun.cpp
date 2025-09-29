#pragma once
#include <iostream>
#include <string>
using namespace std;

// Class Stasiun
class Stasiun {
// Attributes
private:
    string kodeStasiun;
    string namaStasiun;
    string tipeStasiun;

public:
    // Default Constructor
    Stasiun() {
        kodeStasiun = "";
        namaStasiun = "";
        tipeStasiun = "";
    }
    // Parameterized Constructor
    Stasiun(string kodeStasiun, string namaStasiun, string tipeStasiun) {
        this->kodeStasiun = kodeStasiun;
        this->namaStasiun = namaStasiun;
        this->tipeStasiun = tipeStasiun;
    }

    // Method to print Stasiun information
    void printInfo() {
        cout << "(" << kodeStasiun << ") " << namaStasiun << " - " << tipeStasiun << endl;
    }

    // Getter and Setter for kodeStasiun
    string getKodeStasiun() const { return this->kodeStasiun; }
    void setKodeStasiun(string kode) { this->kodeStasiun = kode; }

    // Getter and Setter for namaStasiun
    string getNamaStasiun() const { return this->namaStasiun; }
    void setNamaStasiun(string nama) { this->namaStasiun = nama; }

    // Getter and Setter for tipeStasiun
    string getTipeStasiun() const { return this->tipeStasiun; }
    void setTipeStasiun(string tipe) { this->tipeStasiun = tipe; }

    // Destructor
    ~Stasiun() {}
};