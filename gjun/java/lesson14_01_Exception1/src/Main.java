public class Main {
    public static void main(String[] args) {
        int[] numbers = {1,2,3};
        System.out.println(numbers[4]);
        String s = "Java";
        System.out.println(s.charAt(4));
        StringBuilder sb = null;
        System.out.println(sb.append("Java"));
        Object o = "Java";
        StringBuilder sb2 = (StringBuilder)o;
        int number = Integer.parseInt("0");
        int number2 = Integer.parseInt("123,456");
        System.out.println(100/number);

        //FileReader fr = new FileReader("test.txt");
    }


}
