// 儲存檔名：J309_Factorial.java
import java.util.Scanner;
public class J309_Factorial {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int num = 0;
        int sum = 0;
        System.out.println("以下請輸入測驗分數(輸入0結束)");
        //後測試迴圈重覆結構
        do {

            num = input.nextInt();
            sum += num;

        } while (num != 0);
        System.out.println("測驗分數總計 = " + sum + " 分");
    }
}
