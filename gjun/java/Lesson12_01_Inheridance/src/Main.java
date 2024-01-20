public class Main {
    public static void main(String[] args) {
        Shirt s1 = new Shirt();
        s1.setId(1);
        s1.setPrice(3.5);
        s1.setSize('M');
        s1.setColorCode('B');
        s1.setNeckSize(14);
        s1.display();

        Socks sc = new Socks();
        sc.setId(2);
        sc.setPrice(1.2);
        sc.setSize('S');
        sc.showInfo();
    }
}