import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int l = 20;
        System.out.println("Please enter the amount of the numbers:");
        l = sc.nextInt();
        double[] array = new double[l];
        for (int i = 0 ; i < array.length ; i++){
            System.out.print("Please enter number No." + (i+1) + ":");
            array[i] = sc.nextDouble();
        }
        System.out.println();
        Sort.bubbleStart(array);
    }
}
