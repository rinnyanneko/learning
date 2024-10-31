public class TestVar01 {
    public static void main(String[] args) {
        //declare variable
        byte var1 = -128; //-128 ~ 127
        int price = 500;
        System.out.println("Price:" + price);
        price = 1200; //= assignment operator
        System.out.println("Price:" + price);
        System.out.println(Byte.MIN_VALUE);
        System.out.println(Byte.MAX_VALUE);
        System.out.println(Integer.MIN_VALUE);
        System.out.println(Integer.MAX_VALUE);
        //default is double
        double d1 = 0.01;
        float f1 = 0.01f;
        float f2 = (float)d1; //type changing
        price = price + 300;
        System.out.println("Price:" + price);
    }
}