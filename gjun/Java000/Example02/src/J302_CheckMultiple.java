// 檔名：J302_CheckMultiple.java
public class J302_CheckMultiple {
    public static void main(String[] args) {
        //宣告物件變數 keyin
        java.util.Scanner keyin;
        //建立Scanner類別的物件實例
        keyin = new java.util.Scanner(System.in);
        System.out.print("請輸入整數: ");
        int iNum = keyin.nextInt();
        //雙向選擇結構
        if (iNum%2 == 0) //若iNum是2的倍數
        {
            System.out.println(iNum + " 是2倍數");
        } 
        else //若iNum非2的倍數
        {
            System.out.println(iNum + " 不是2倍數");
        }
    }
}
