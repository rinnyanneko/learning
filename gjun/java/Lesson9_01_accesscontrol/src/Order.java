public class Order {
    private Item[] items = new Item[5];
    private int count;
    public void setItem(Item i){
        if (count == 4) {
            System.err.println("ERROR");
        }
        items[count] = i;
        count ++;
    }
    public double getOrderTotalPrice(){
        double d = 0;
        for(int i = 0 ; i < count ; i++){
            d += items[i].getPrice();
        }
        return d;
    }
}
