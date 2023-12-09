public class Cart {
    public Item[] items = {new Item(), new Item(), new Item()};
    public String date;
    public double total;
    public void addItem(){};
    public void checkOut(){};
    public void showCart(){
        for(Item i : items){
            i.display();
        }
    }
    public void cancel(){
        System.out.println("cancel in Cart is running");
    }
}
