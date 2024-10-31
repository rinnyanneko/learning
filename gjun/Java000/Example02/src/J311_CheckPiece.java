// 儲存檔名：J311_CheckPiece.java

import java.io.*;
public class J311_CheckPiece {

    public static void main(String[] args){
        //建立Scanner類別的物件實例 
        java.util.Scanner keyin = new java.util.Scanner(System.in);
        char inChar;
        int plus = 0, minus = 0, zero = 0;
        do {
            System.out.print("請輸入整數數值：");
            int inNum = keyin.nextInt();
            //多向選擇結構 true 要執行程式碼僅一行時，可省略{}
            if      (inNum > 0) plus++;   //若 inNum 大於 0
            else if (inNum < 0) minus++;  //若 inNum 小於 0
            else                zero++;   // 否則若 inNum 等於 0
            //判斷後測試迴圈是否再繼續
            System.out.print("是否輸入下一筆數值 (y/n)：");
            inChar = keyin.next().charAt(0);     //inChar=輸入一個字元
        } while (inChar == 'Y' || inChar == 'y');// 若字元='Y'則重複迴圈
        System.out.println("----------------------");
        System.out.println("正值有 " + plus  + " 個"); // 顯示正數個數
        System.out.println("負值有 " + minus + " 個"); // 顯示負數個數
        System.out.println("零值有 " + zero  + " 個"); // 顯示零的個數
    }
}
