// 儲存檔名：J308_Power.java

public class J308_Power {

    public static void main(String[] args) {
        int count = 1, power = 1;	// while 迴圈初值
        System.out.println("計數\t2的 N 次方");
        while (count <= 10) //迴圈布林條件
        {
            power += power;	// 計算平方
            System.out.println(count + "\t" + power);// 輸出計數值與平方值
            count++;		// 計數值加 1
        }
    }
}
