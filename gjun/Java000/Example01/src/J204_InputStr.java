// 儲存檔名：J204_InputStr.java
import java.util.Scanner;
public class J204_InputStr {

    public static void main(String[] args) throws java.io.IOException {
        //建立Scanner類別的物件實例 
        //java.util.Scanner keyin = new java.util.Scanner(System.in);
        Scanner keyin = new Scanner(System.in);
        System.out.print("請輸入你的大名: ");
        String name = keyin.next(); //讀取輸入並存入name(字串物件變數)
        System.out.println("你輸入的姓名: " + name);
    }
}
