// 儲存檔名：J305_CheckNumber.java

public class J305_CheckNumber {
    public static void main(String[] args) throws java.io.IOException {
        java.util.Scanner keyin;
        keyin = new java.util.Scanner(System.in);
        
        System.out.print("請輸入整數: ");
        int iNum = keyin.nextInt(); //可輸入整數
        System.out.print(iNum + " 是");
        System.out.println((iNum >= 0) ? "正數" : "負數"); //使用三元運算子
        System.out.println("--------------------");
        int num1 = 100;
        int num2 = 102;
        int ans = (num1 > num2) ? num1 : num2; //使用三元運算子
        System.out.println("兩數最大值為:" + ans);
    }
}
