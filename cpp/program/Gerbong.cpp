#pragma once
#include "SaranaKereta.cpp"
#include "trainmark.cpp"

// Class Gerbong
class Gerbong : public SaranaKereta
{
// Attributes
private:
    Trainmark jenisTrainmark;

public:
    // Default Constructor
    Gerbong() : SaranaKereta() {
        jenisTrainmark = Trainmark();
    }

    // Parameterized Constructor
    Gerbong(string kodeSarana, string namaSarana, int beratSarana, string tipeBogie, Trainmark jenisTrainmark) : SaranaKereta(kodeSarana, namaSarana, beratSarana, tipeBogie) {
        this->jenisTrainmark = jenisTrainmark;
    }

    // Getter and Setter for jenisTrainmark
    Trainmark getJenisTrainmark() const {return this->jenisTrainmark;}
    void setJenisTrainmark(Trainmark trainmark) {this->jenisTrainmark = trainmark;}

    // Destructor
    ~Gerbong(){}
};