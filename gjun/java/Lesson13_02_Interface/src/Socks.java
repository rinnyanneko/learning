public class Socks extends Clothing implements Returnable{
    @Override
    public void doReturn(){
        System.out.println("Socks is returnable.");
    }
}
