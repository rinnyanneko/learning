public class Member implements Comparable<Member>{
    private String id;
    private String name;
    private int age;
    public String getName(){
        return name;
    }
    public int getAge(){
        return age;
    }
    @Override
    public int compareTo(Member m){
        return id.compareTo(m.id);
    }
    public Member(String id, String name, int age) {
        this.id = id;
        this.name = name;
        this.age = age;
    }

    public String getId() {
        return id;
    }


    @Override
    public String toString() {
        return "Member{" + "id=" + id + ", name=" + name + ", age=" + age + '}';
    }

}