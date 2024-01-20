public class Student {
    private int id = 0;
    private String name = "UnSet";
    public Student(int id, String name){
        this.id = id;
        this.name = name;
    }
    @Override
    public String toString(){
        return id +":" + name;
    }
}
