public class Main {
    public static void main(String[] args) {
        System.out.println(Math.PI);
        System.out.println(Math.sqrt(81));
        System.out.println(Math.cbrt(27));
        int i = (int)Math.cbrt(8);
        System.out.println(i);

        double area = 100 * 100 * Math.PI;
        System.out.println(area);
        System.out.println(Math.ceil(area));
        System.out.println(Math.floor(area));
        System.out.println(Math.round(area));
        int j = Math.round((float)area);
        System.out.println(j);

        System.out.println(Math.random());
        int number = (int)(Math.random()*1000)%46+1;
        System.out.println(number);
    }
}