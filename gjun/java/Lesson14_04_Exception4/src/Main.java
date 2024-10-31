import java.util.InputMismatchException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner k = new Scanner(System.in);
        int i = 0;
        while(true){
            try{
                String s = k.next();
                i = Integer.parseInt(s);
                break;
            }catch(NumberFormatException e){
                System.out.println("Input error, input again.");
            }
        }
        System.out.println(i * i);
    }
}
