// 儲存檔名：J307_SumN.java

public class J307_SumN {

    public static void main(String[] args) {
        int sum = 0;
        System.out.println("計數\t總和");
        //條件符合true時,執行下列 { 程式區塊 }
        for (int count=1 ; count<=10 ; count++) {
            //為for迴圈true執行區塊
            sum += count;
            System.out.println(count + "\t" + sum); 
        }
    }
}
