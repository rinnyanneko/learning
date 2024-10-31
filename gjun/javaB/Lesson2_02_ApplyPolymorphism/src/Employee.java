public class Employee {
    private double salary;
    public Employee(double salary){
        this.salary = salary;
    }
    public double getSalary(){
        return salary;
    }
    public double getBonus(){
        return getSalary()*GoodBonus.getPercent(this);
    }
}
