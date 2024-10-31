// 儲存檔名：J314_Multiple.java
public class J314_Multiple {

    public static void main(String[] args) {
        int count;
        System.out.print("1 至 30 間 3 的倍數為：");
        for (count=1; count<=30; count++) // 定義迴圈
        {
            if (count%3 != 0) // 若不是3的倍數
            {
                //break;	     // 中斷迴圈作用
                continue;  // 返回迴圈起點，繼續下一迴圈(中途折返作用)
            }						
            System.out.print(count + "  "); //顯示3的倍數並空格
        }
        System.out.println(); //換行
    }
}
