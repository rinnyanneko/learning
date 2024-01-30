
public class Employee {
    private int id;
    private String name;
    private double salary;

    public Employee(int id, String name, double salary) {
        this.id = id;
        this.name = name;
        this.salary = salary;
    }
    @Override
    public boolean equals(Object e){
        if(!(e instanceof Employee)){
            return false;
        }
        if(id != ((Employee)e).getId()){
            return false;
        }
        if(!name.equals(((Employee)e).getName())){
            return false;
        }
        if(salary != ((Employee)e).getSalary()){
            return false;
        }
        return true;
    }

    @Override
    public int hashCode(){
        //return id;
        //return name.hashCode();
        return id + (int)(salary*100);
    }

    @Override
    public String toString() {
        return "Employee{" + "id=" + id + ", name=" + name + ", salary=" + salary + '}';
    }


    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public double getSalary() {
        return salary;
    }

    public void setSalary(double salary) {
        this.salary = salary;
    }

}
