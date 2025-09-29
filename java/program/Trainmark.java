public class Trainmark {
    // Attributes
    private char kodeTrainmark;
    private int kecepatanMaks; // in km/h

    // Default Constructor
    public Trainmark() {
        this.kodeTrainmark = '\0';
        this.kecepatanMaks = 0;
    }

    // Parameterized Constructor
    public Trainmark(char kodeTrainmark, int kecepatanMaks) {
        this.kodeTrainmark = kodeTrainmark;
        this.kecepatanMaks = kecepatanMaks;
    }

    // Getter and Setter for kodeTrainmark
    public char getKodeTrainmark() {return this.kodeTrainmark;}
    public void setKodeTrainmark(char kode) {this.kodeTrainmark = kode;}

    // Getter and Setter for kecepatanMaks
    public int getKecepatanMaks() {return this.kecepatanMaks;}
    public void setKecepatanMaks(int kecepatan) {this.kecepatanMaks = kecepatan;}
}