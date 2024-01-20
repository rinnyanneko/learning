import java.util.Arrays;
import java.util.Scanner;


public class Main {

    public static void main(String[] args) {
        System.out.println("Hello");
        Scanner k = new Scanner(System.in);

        int[] numbers = {5,4,7,9,6,1,2,3};
        Arrays.sort(numbers);
        System.out.println(Arrays.toString(numbers));
    }

}
