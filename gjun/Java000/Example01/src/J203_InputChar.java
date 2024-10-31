// 儲存檔名:J203_InputChar.java

public class J203_InputChar {

    public static void main(String[] args) throws java.io.IOException {
        System.out.print("輸入任意一個字元: ");
        //read() 傳統讀取鍵盤輸入的一個字元
        char cin = (char) System.in.read(); 	
        System.out.println("你剛剛輸入的字元是: " + cin);
    }
}
