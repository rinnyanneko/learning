public class TestLoop01 {
	public static void main(String[] args) {
		while (true){
			int r = (int) (Math.random() * 100 + 1);
			System.out.println("Hello Java..." + r);
			if (r == 100){
				System.err.println("100!!!");
				break;
			}
		}
	}
}
