public class Main {
    public static void main(String[] args) {
        String s1 = "123";
        String s2 = "456";
        int i1 = Integer.parseInt(s1);
        int i2 = Integer.parseInt(s2);
        int i3 = i1 + i2;
        String s3 = Integer.toString(i3);
        System.out.println(s3);

        String s4 = "1.23";
        String s5 = "4.56";
        double d1 = Double.parseDouble(s4);
        double d2 = Double.parseDouble(s5);
        double d3 = d1 + d2;
        String s6 = Double.toString(d3);
        System.out.println(s6);
    }
}
