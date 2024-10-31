public class Item {
    public int itemId;
    public double price;
    public char colorCode = 'U';
    public void display(){
        System.out.println("**************");
        System.out.println("Item ID: " + itemId);
        System.out.println("Price: " + price);
        System.out.println("Color Code: " + colorCode);
        System.out.println("**************");
    }
}
