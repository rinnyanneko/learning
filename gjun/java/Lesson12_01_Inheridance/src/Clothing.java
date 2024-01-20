public class Clothing {
    private int id;
    private double price;
    private char size;

    //為了方便 subclass 開發, superclass 會寫一個 no argument constructor
    public Clothing(){
        System.out.println("No-args constructor of Clothing.");
    }
    public Clothing(int a){
        System.out.println("One-arg constructor of Clothing.");
    }

    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

    public double getPrice() {
        return price;
    }

    public void setPrice(double price) {
        this.price = price;
    }

    public char getSize() {
        return size;
    }

    public void setSize(char size) {
        this.size = size;
    }
    public String getInfo( ){
        return id+":"+price+":"+size;
    }
}