public class Main {
    public static void main(String[] args) {
        Customer c1 = new Customer();
        Customer c2 = new Customer();
        c1.name = "HELLO";
        c1.age = 18;
        c2.age = 20;
        c1.displayCustomer();
        System.out.println("----------------------");
        c2.displayCustomer();
        System.out.println("----------------------");
        c1.cart.cancel();
        System.out.println("----------------------");
        Customer c3 = c1; //reference to same obj
        c3.age = 25;
        c1.age = 35;
        c1.displayCustomer();
        c3.displayCustomer();
        System.out.println("----------------------");
        c1.cart.showCart();
    }
}