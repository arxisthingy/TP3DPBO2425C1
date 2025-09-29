#pragma once
#include <string>
#include <iostream>
using namespace std;

// Class StasiunPemberhentian
class StasiunPemberhentian
{
// Attributes
private:
    string kodeStasiun;
    string namaStasiun;
    string jenisStasiun;

public:
    // Default Constructor
    StasiunPemberhentian(){
        kodeStasiun = "";
        namaStasiun = "";
        jenisStasiun = "";
    }

    // Parameterized Constructor
    StasiunPemberhentian(string kodeStasiun, string namaStasiun, string jenisStasiun){
        this->kodeStasiun = kodeStasiun;
        this->namaStasiun = namaStasiun;
        this->jenisStasiun = jenisStasiun;
    }

    // Method to print StasiunPemberhentian information
    void printInfo() {
        cout << endl;
        cout << "=== Info Stasiun Pemberhentian " << "(" << kodeStasiun << ") " << namaStasiun << " ===" << endl;
        cout << "Jenis Stasiun: " << jenisStasiun << endl;
    }

    // Getter and Setter for kodeStasiun
    string getKodeStasiun() const {return this->kodeStasiun;}
    void setKodeStasiun(string kode) {this->kodeStasiun = kode;}

    // Getter and Setter for namaStasiun
    string getNamaStasiun() const {return this->namaStasiun;}
    void setNamaStasiun(string nama) {this->namaStasiun = nama;}

    // Getter and Setter for jenisStasiun
    string getJenisStasiun() const {return this->jenisStasiun;}
    void setJenisStasiun(string jenis) {this->jenisStasiun = jenis;}

    // Destructor
    ~StasiunPemberhentian(){}
};