public class Main {
    public static void main(String[] args) {
        Employee e = new Employee(20000);
        Manager m = new Manager(25000);
        Engineer en = new Engineer(30000);
        Administrator a = new Administrator(35000);
        System.out.println(e.getBonus());
        System.out.println(m.getBonus());
        System.out.println(en.getBonus());
        System.out.println(a.getBonus());
    }
}
