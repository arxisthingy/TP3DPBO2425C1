#pragma once
#include <string>
using namespace std;

// Class SaranaKereta
class SaranaKereta
{
// Attributes
private:
    string kodeSarana;
    string namaSarana;
    int beratSarana;
    string tipeBogie;

public:
    // Default Constructor
    SaranaKereta(){
        kodeSarana = "";
        namaSarana = "";
        beratSarana = 0;
        tipeBogie = "";
    }

    // Parameterized Constructor
    SaranaKereta(string kodeSarana, string namaSarana, int beratSarana, string tipeBogie){
        this->kodeSarana = kodeSarana;
        this->namaSarana = namaSarana;
        this->beratSarana = beratSarana;
        this->tipeBogie = tipeBogie;
    }

    // Getter and Setter for kodeSarana
    string getKodeSarana() const {return this->kodeSarana;}
    void setKodeSarana(string kode) {this->kodeSarana = kode;}

    // Getter and Setter for namaSarana
    string getNamaSarana() const {return this->namaSarana;}
    void setNamaSarana(string nama) {this->namaSarana = nama;}

    // Getter and Setter for beratSarana
    int getBeratSarana() const {return this->beratSarana;}
    void setBeratSarana(int berat) {this->beratSarana = berat;}

    // Getter and Setter for tipeBogie
    string getTipeBogie() const {return this->tipeBogie;}
    void setTipeBogie(string tipe) {this->tipeBogie = tipe;}

    // Destructor
    ~SaranaKereta(){}
};
