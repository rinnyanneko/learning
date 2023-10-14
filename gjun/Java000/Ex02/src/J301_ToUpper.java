// 儲存檔名：J301_ToUpper.java

public class J301_ToUpper {

    public static void main(String[] args) throws java.io.IOException {
        char inkey;
        System.out.print("請按任意鍵：");
        inkey = (char) System.in.read(); //inkey = read()輸入一個字元
        //單向選擇結構，若inkey為小寫字母時為 true
        if (inkey>='a' && inkey<='z'){
            inkey -= 32;  //小寫轉成大寫
        }
        System.out.println("輸入字元為：" + inkey);
    }
}
