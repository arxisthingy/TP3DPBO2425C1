public class Gerbong extends SaranaKereta {
    // Attributes
    private Trainmark jenisTrainmark;

    // Default Constructor
    public Gerbong() {
        super();
        this.jenisTrainmark = new Trainmark();
    }

    // Parameterized Constructor
    public Gerbong(String kodeSarana, String namaSarana, int beratSarana, String tipeBogie, Trainmark jenisTrainmark) {
        super(kodeSarana, namaSarana, beratSarana, tipeBogie);
        this.jenisTrainmark = jenisTrainmark;
    }

    // Getter and Setter for jenisTrainmark
    public Trainmark getJenisTrainmark() {return this.jenisTrainmark;}
    public void setJenisTrainmark(Trainmark trainmark) {this.jenisTrainmark = trainmark;}
}