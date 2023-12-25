public class Student {
    public static int count = 0;
    public int id;
    public String name;
    public Student(){
        count++;
        System.out.println("I am running!");
    }
    public void display(){
        System.out.println(id+":"+name);
    }
    public static void main(String[] args) {
        Student s1 = new Student();
        s1.id = 0x001;
        s1.name = "Yong";
        s1.display();
        Student s2 = new Student();
        s2.id = 0x002;
        s2.name = "Jeffery";
        s2.display();
        System.out.println(count);
    }
}
