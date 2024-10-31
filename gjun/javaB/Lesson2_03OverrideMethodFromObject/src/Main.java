public class Main {
    public static void main(String[] args) {
        Employee e1 = new Employee(1,"John",20000);
        System.out.println(e1.toString());
        Employee e2 = new Employee(1,"John",20000);
        System.out.println(e2.toString());
        System.out.println(e1 == e2);
        System.out.println(e1.equals(e2));
        String s = "Hi";
        System.out.println(e1.equals(null));
        System.out.println("---------------");
        System.out.println(e1.hashCode());
        System.out.println(e2.hashCode());
    }
}
