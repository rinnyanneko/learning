public class Member implements Comparable<Member>{
    private String id;
    private String name;
    private int age;
    public int compareTo(Member o){
        //return age - o.age;
        //return id.hashCode() - o.id.hashCode();
        //return name.hashCode() - o.name.hashCode();
        return o.name.hashCode() - name.hashCode();
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