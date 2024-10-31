public class Main {
    public static void main(String[] args) {
        StringBuilder sb1 = new StringBuilder();
        StringBuilder sb2 = new StringBuilder("Java");
        StringBuilder sb3 = new StringBuilder(3000);

        sb1.append("Java").append(" ").append("11");
        System.out.println(sb1);

        sb2.append("SE");
        System.out.println(sb2);
        sb2.insert(4," ");
        System.out.println(sb2);

        sb3.append("Java SE 11 JDK");
        System.out.println(sb3);
        String s = "11 ";
        int index = sb3.indexOf(s);
        sb3.delete(index, index + s.length());
        System.out.println(sb3);

        s = "SE";
        index = sb3.indexOf(s);
        sb3.replace(index, index + s.length(), "EE");
        System.out.println(sb3);
    }
}