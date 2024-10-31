/* 儲存檔名：J313_Times.java */
public class J313_Times {
    public static void main(String[] args) {
        System.out.print("   ");
        for (int i=1; i<=9; i++) {
            System.out.print(i + "\t");
        }
        System.out.print("\n -------------------------------");
        System.out.print("----------------------------------");
        //巢狀for迴圈
        for (int k=1; k<=9; k++) {
            System.out.print("\n" + k + "| ");
            for (int j=1; j<=9; j++) {
                System.out.print(k * j + "\t");
            }
        }
    }
}
