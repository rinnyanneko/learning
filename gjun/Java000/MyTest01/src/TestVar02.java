public class TestVar02 {
    public static void main(String[] args) {
        char ch1 = 'A';
        char ch2 = '喵';
        String name = "Rin";
        int age = 18;
        System.out.printf("ch1 = %c, ch2 = %c%n", ch1, ch2);
        System.out.printf("學生姓名：%s, 性別：%c%n", name, ch2);
        System.out.println(age >= 20);
        System.out.println(age < 20);
        System.out.println(age == 20);
        System.out.println(age != 20);
        boolean isOpenDoor = true;
        System.out.println(isOpenDoor);
    }
}
