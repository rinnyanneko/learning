public class Main {
    public static void main(String[] args) {
        test(1);
    }
    public static void test(byte i){
        System.out.println("1");
    }
    public static void test(double j){
        System.out.println("2");
    }
    public static void test(int i, double j){
        System.out.println("3");
    }
    public static void test(double i, int j){
        System.out.println("4");
    }
}
