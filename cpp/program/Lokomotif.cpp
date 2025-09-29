#pragma once
#include <iostream>
#include "Mesin.cpp"
#include "SaranaKereta.cpp"

// Class Lokomotif
class Lokomotif : public SaranaKereta
{
// Attributes
private:
    Mesin jenisMesin;
    string konfigurasiGandar;
    string jenisMotorTraksi;

public:
    // Default Constructor
    Lokomotif() : SaranaKereta() {
        jenisMesin = Mesin();
        konfigurasiGandar = "";
        jenisMotorTraksi = "";
    }

    // Parameterized Constructor
    Lokomotif(string kodeSarana, string namaSarana, int beratSarana, string tipeBogie, Mesin jenisMesin, string konfigurasiGandar, string jenisMotorTraksi): SaranaKereta(kodeSarana, namaSarana, beratSarana, tipeBogie) {
        this->jenisMesin = jenisMesin;
        this->konfigurasiGandar = konfigurasiGandar;
        this->jenisMotorTraksi = jenisMotorTraksi;
    }

    void printInfo() {
        cout << endl;
        cout << "=== Info Lokomotif " << "(" << getKodeSarana() << ") " << getNamaSarana() << " ===" << endl;
        cout << "Berat Sarana: " << getBeratSarana() << " kg" << endl;
        cout << "Tipe Bogie: " << getTipeBogie() << endl;
        cout << "Jenis Mesin: " << jenisMesin.getNamaMesin() << ", Daya: " << jenisMesin.getDayaMesin() << " HP, Silinder: " << jenisMesin.getSilinder() << endl;
        cout << "Konfigurasi Gandar: " << konfigurasiGandar << endl;
        cout << "Jenis Motor Traksi: " << jenisMotorTraksi << endl;
    }

    // Getter and Setter for jenisMesin
    Mesin getJenisMesin() const {return this->jenisMesin;}
    void setJenisMesin(Mesin mesin) {this->jenisMesin = mesin;}

    // Getter and Setter for konfigurasiGandar
    string getKonfigurasiGandar() const {return this->konfigurasiGandar;}
    void setKonfigurasiGandar(string konfigurasi) {this->konfigurasiGandar = konfigurasi;}

    // Getter and Setter for jenisMotorTraksi
    string getJenisMotorTraksi() const {return this->jenisMotorTraksi;}
    void setJenisMotorTraksi(string jenisMotor) {this->jenisMotorTraksi = jenisMotor;}

    // Destructor
    ~Lokomotif(){}
};