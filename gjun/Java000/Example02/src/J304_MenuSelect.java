// 儲存檔名：J304_MenuSelect.java

public class J304_MenuSelect {
    public static void main(String[] args) throws java.io.IOException {
        char inChar;
        System.out.print("請輸入產品代號(A.珍珠奶茶 B.麥香綠茶 C.青草荼):");
        inChar = (char) System.in.read(); //inChar=輸入一個字元
        switch (inChar) {
            case 'A':	//若inChar為A字元
            case 'a':	//或inChar為a字元
                System.out.println("你選了珍珠奶茶");
                break;  //跳離switch結構區塊
            case 'B':	
            case 'b':	
                System.out.println("你選了麥香綠茶");
                break;
            case 'C':	
            case 'c':	
                System.out.println("你選了青草茶");
                break;
            default:	//inChar為其他字元
                System.out.println("請輸入a,b,c 選擇產品");
        }
        System.out.println("\n*** 結束switch多向結構 ***");
    }
}
