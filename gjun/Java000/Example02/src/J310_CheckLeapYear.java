// 儲存檔名：J310_CheckLeapYear.java

import java.io.*;

public class J310_CheckLeapYear {

    public static void main(String[] args) throws IOException {
        //建立傳統IO物件(輸出入物件)
        BufferedReader line = new BufferedReader(new InputStreamReader(System.in));
        int year;
        do {    //若輸入不是0則迴圈成立
            System.out.print("請輸入西元年份，若輸入 0 則結束：");
            year = Integer.parseInt(line.readLine()); //輸入並把字串轉型為int
            //多向選擇結構
            if (year % 4 != 0) // 若year不是4的倍數
            {
                System.out.println(year + "年不是閏年");
            } 
            else if (year % 100 == 0) // 是4的倍數也是100的倍數
            {
                if(year % 400 == 0){ // 也是400的倍數
                    System.out.println(year + "年是閏年");
                }else{ // 不是400的倍數
                    System.out.println(year + "年不是閏年");
                }
            } 
            else // 是4的倍數不是100的倍數
            {
                System.out.println(year + "年是閏年");
            }
        } while (year != 0); //若輸入不是0則迴圈成立
    }
}
