public class TestVar02 {
    public static void main(String[] args) {
        final double PI = 3.14159;
        char ch1 = 'A';
        char ch2 = '喵';
        String name = "Rin";
        int age = 18;
        Integer age1 = 20;
        int hex = 0x0000F;
        System.out.printf("ch1 = %c, ch2 = %c%n", ch1, ch2);
        System.out.printf("學生姓名：%s, 性別：%c%n", name, ch2);
        System.out.println(age >= 20);
        System.out.println(age < 20);
        System.out.println(age == 20);
        System.out.println(age != 20);
        boolean isOpenDoor = true;
        System.out.println(isOpenDoor);
        System.out.println("科學記號："+1.23e-3);//1.23 * 10 ^ -3
        System.out.println("科學記號："+1.23e+3);//1.23 * 10 ^ 3
        System.out.println(0b00011);
        System.out.println(0b000110011);
        System.out.println(0b00011_0011);
    }
}
