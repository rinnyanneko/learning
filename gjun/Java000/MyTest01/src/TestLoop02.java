import java.util.Scanner;
public class TestLoop02 {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		System.out.print("Please enter loop times:");
		int loop = scan.nextInt();
		int c = 1;
		while (c <= loop){
			System.out.println("Hello Java..." + c);
			c++;
		}
		System.out.println("End Loop...");
	}
}
