public class Item {
    private double price = 15.0;
    public void setPrice(Customer c){
        if (c.getIsVIP()){
            price *= 0.8;
        }
    }
    public double getPrice(){
        return price;
    }
}