public class Main {
    public static void main(String[] args) {
        Counter.counter = 4;
        System.out.println(Counter.getCounter());
        Counter.addCounter();
        System.out.println(Counter.getCounter());

        Counter c1 = new Counter();
        c1.counter = 10;
        c1.addCounter();
        System.out.println(Counter.getCounter());

        Counter c2 = new Counter();
        c2.counter = 100;
        c2.addCounter();
        System.out.println(c1.getCounter());
    }
}
