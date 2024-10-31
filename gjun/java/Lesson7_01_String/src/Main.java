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
        String s1 = "I love Java.";

        String s2 = " Java is good ";
        s2 = s2.trim();
        System.out.println("---" + s2 + "---");

        String s3 = "Java is a nice language";
        s3 = s3.toLowerCase();
        System.out.println(s3);
        s3 = s3.toUpperCase();
        System.out.println(s3);

        int index = s2.indexOf("a");
        System.out.println(index);
        index = s2.indexOf("a", index + 1);
        System.out.println(index);

        int count = 0;
        int x = -1;
        while (true){
            x = s3.indexOf("A", x + 1);
            if (x == -1){
                break;
            }
            count++;
        }
        System.out.println(count);

        String s4 = s1.substring(7, 11);
        System.out.println(s4);
    }
}