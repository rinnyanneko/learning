public class Main {
    public static void main(String[] args) {
        /*
        System.out.println("Java");
        String s1 = "Java";
        System.out.println(s1);
        String s2 = s1;
        System.out.println(s2);
        String s3 = "JAVA";
        //String s4 = new String("JAVA"); not good
        String s4 = "JAVA";
        //String s5 = new String("java"); not good
        String s5 = "java";
        */
        String s1 = "Hello";
        System.out.println(s1.concat("World"));
        System.out.println(s1);

        s1 = s1.concat("World");
        System.out.println(s1);
    }
}