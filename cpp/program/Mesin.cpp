#pragma once
#include <string>
using namespace std;

// Class Mesin
class Mesin
{
// Attributes
private:
    string namaMesin;
    int dayaMesin; // in HP
    int silinder;

public:
    // Default Constructor
    Mesin(){
        namaMesin = "";
        dayaMesin = 0;
        silinder = 0;
    }

    // Parameterized Constructor
    Mesin(string namaMesin, int dayaMesin, int silinder){
        this->namaMesin = namaMesin;
        this->dayaMesin = dayaMesin;
        this->silinder = silinder;
    }

    // Getter and Setter for namaMesin
    string getNamaMesin() const {return this->namaMesin;}
    void setNamaMesin(string nama) {this->namaMesin = nama;}

    // Getter and Setter for dayaMesin
    int getDayaMesin() const {return this->dayaMesin;}
    void setDayaMesin(int daya) {this->dayaMesin = daya;}

    // Getter and Setter for silinder
    int getSilinder() const {return this->silinder;}
    void setSilinder(int sil) {this->silinder = sil;}

    // Destructor
    ~Mesin(){}
};