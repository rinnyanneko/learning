import java.sql.SQLOutput;
import java.util.Scanner;
public class TestVar03 {
    public static void main(String[] args) {
        Scanner keyin = new Scanner(System.in);
        Integer a = 10, b = 20;
        //算數運算子
        System.out.println(a + b);
        System.out.println("a + b = " + a + b);//串接運算
        System.out.println("a + b = " + (a + b));
        System.out.printf("a + b = %d%n", a + b);
        System.out.println(a++);
        System.out.println(a);
        System.out.println(++a);
        System.out.println(a);
        System.out.print("請輸入成績：");
        int score = keyin.nextInt();
        System.out.printf("學生成績：%d分%n%s", score, score>=60 ? "及格" : "不及格");
    }
}
