// 儲存檔名：J312_Table.java
public class J312_Table {
    public static void main(String args[]) {
        //巢狀for迴圈
        for (int i=5; i>=1; i--) {
            for (int j=1; j<=i; j++) {
                System.out.print("＊");
            }
            System.out.println();
        }
        System.out.println("\n迴圈執行結束。");
    }
}
