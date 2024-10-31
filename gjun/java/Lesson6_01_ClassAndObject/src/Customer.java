public class Customer {
    public String name = "Junior Duke";
    public int custID = 1205;
    public String address;
    public int orderNum;
    public int age;
    public Cart cart = new Cart();
    public void displayCustomer(){
        System.out.println("Customer: " + name);
        System.out.println("Age: " + age);
    }
}
