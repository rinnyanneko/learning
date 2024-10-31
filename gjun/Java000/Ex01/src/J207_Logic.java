//儲存檔名：J207_Logic.java

public class J207_Logic {

    public static void main(String[] args) {
        int a=1, b=4, c=4;	//宣告並初始a, b, c值
        boolean x = a<b && a<c;	//宣告並指定 x 值 (邏輯運算子AND&& OR||)
        System.out.print("a<b = ");
        System.out.println(a < b); //比較運算
        System.out.print("a<c = ");
        System.out.println(a < c);

        System.out.println("a<b && a<c = " + x); //輸出 x boolean值
    }
}
