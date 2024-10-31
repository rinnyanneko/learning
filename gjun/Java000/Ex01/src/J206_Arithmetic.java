// 儲存檔名：J206_Arithmetic.java

public class J206_Arithmetic {

    public static void main(String[] args) {
        byte a=1, b=4, c=4;	//宣告並初始a, b, c值
        int x = b * b - a * c;	//宣告並指定x值
        int c1 = 25 - 5 * 4 / 2 - 10 + 4;
        int c2 = (((25 - 5) * 4) / (2 - 10)) + 4;
        System.out.println("x=" + x);
        System.out.println("a=" + a);	//輸出字串、a值
        System.out.println("b=" + b);	//輸出字串、b值
        System.out.println("c=" + c);	//輸出字串、c值
        System.out.println("c1=" + c1);
        System.out.println("c2=" + c2);
    }
}
