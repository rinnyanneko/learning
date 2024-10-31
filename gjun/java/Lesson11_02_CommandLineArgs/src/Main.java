public class Main {
    public static void main(String[] args) {
        if (args.length < 2){
            System.out.println("Please enter the name and password");
            return;
        }
        if (!args[0].equals("aaaa")){
            System.err.println("Name is wrong!");
            return;
        }
        if (!args[1].equals("1111")){
            System.err.println("Password is wrong!");
            return;
        }
        System.out.println("Welcome!");
    }
}
