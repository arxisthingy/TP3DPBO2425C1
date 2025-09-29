public class Mesin {
    // Attributes
    private String tipeMesin;
    private int dayaMesin; // in HP
    private int silinder;

    // Default Constructor
    public Mesin() {
        this.tipeMesin = "";
        this.dayaMesin = 0;
        this.silinder = 0;
    }

    // Parameterized Constructor
    public Mesin(String tipeMesin, int dayaMesin, int silinder) {
        this.tipeMesin = tipeMesin;
        this.dayaMesin = dayaMesin;
        this.silinder = silinder;
    }

    // Getter and Setter for tipeMesin
    public String getTipeMesin() {return this.tipeMesin;}
    public void setTipeMesin(String tipe) {this.tipeMesin = tipe;}

    // Getter and Setter for dayaMesin
    public int getDayaMesin() {return this.dayaMesin;}
    public void setDayaMesin(int daya) {this.dayaMesin = daya;}

    // Getter and Setter for silinder
    public int getSilinder() {return this.silinder;}
    public void setSilinder(int silinder) {this.silinder = silinder;}
}