public class Main {
    public static void main(String[] args) {
        Order o1 = new Order();
        Customer c1 = new Customer();
        Item i1 = new Item();
        i1.setPrice(c1);
        o1.setItem(i1);
        Item i2 = new Item();
        i2.setPrice(c1);
        o1.setItem(i2);
        Item i3 = new Item();
        i3.setPrice(c1);
        o1.setItem(i3);
    }
}
