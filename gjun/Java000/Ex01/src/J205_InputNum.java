// 儲存檔名：J205_InputNum.java

public class J205_InputNum {

    public static void main(String[] args) {
        //建立Scanner類別的物件實例 
        java.util.Scanner keyin = new java.util.Scanner(System.in);
        System.out.print("請輸入整數: ");
        int iNum = keyin.nextInt();
        System.out.println("輸入的整數: " + iNum);
        System.out.print("請輸入浮點數: ");
        float fNum = keyin.nextFloat();
        System.out.println("輸入的浮點數: " + fNum);
    }
}
