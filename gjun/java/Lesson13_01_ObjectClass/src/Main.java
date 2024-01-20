public class Main {
    public static void main(String[] args) {
        Student s = new Student(1,"Mary");
        int[] a = new int[3];
        Object o = "String";
        Object o2 = 1;
        Object o3 = new StringBuilder("StringBuilder");
        Object o4 = new Student(2,"Adam");
        System.out.println(o.toString());
        System.out.println(o2.toString());
        System.out.println(o3.toString());
        System.out.println(o4.toString());
        System.out.println(s.toString());
        System.out.println(a.toString());
    }

}
