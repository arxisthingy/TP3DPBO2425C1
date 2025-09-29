#pragma once
#include <string>
using namespace std;

// Class Trainmark
class Trainmark
{
// Attributes
private:
    char kodeTrainmark;
    int kecepatanMaks; // in km/h

public:
    // Default Constructor
    Trainmark(){
        kodeTrainmark = '\0';
        kecepatanMaks = 0;
    }

    // Parameterized Constructor
    Trainmark(char kodeTrainmark, int kecepatanMaks){
        this->kodeTrainmark = kodeTrainmark;
        this->kecepatanMaks = kecepatanMaks;
    }

    // Getter and Setter for kodeTrainmark
    char getKodeTrainmark() const {return this->kodeTrainmark;}
    void setKodeTrainmark(char kode) {this->kodeTrainmark = kode;}

    // Getter and Setter for kecepatanMaks
    int getKecepatanMaks() const {return this->kecepatanMaks;}
    void setKecepatanMaks(int kecepatan) {this->kecepatanMaks = kecepatan;}

    // Destructor
    ~Trainmark(){}
};