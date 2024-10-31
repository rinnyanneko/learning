public class Shirt extends Clothing implements Returnable{
    @Override
    public void doReturn(){
        System.out.println("Shirt is returnable.");
    }
}
