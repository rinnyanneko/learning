// 儲存檔名：J201_Define.java
// 檔案功能：資料型別與宣告變數

public class J201_Define
{
  public static void main(String[] args)
  {
    boolean bNumber = true;
    byte byteNumber = -128;
    short shortNumber = 0xff;  //16進位，資料表示
    int intNumber = 0xffee;
    float fNumber = 12.5f;     //Java 預設浮點數為 double dada type
    double dNumber = 12.5;
    char zero = '0';	 //使用單引號 它是字元0，不是數值0
    char chrA = 65;	 // A字元的ASCII Code為65
    char uniA = '\u0041';// A的Unicode為0041
    String name = "Smile";

    System.out.println("(byte) = " + byteNumber);
    System.out.println("(short) 0xff = " + shortNumber);
    System.out.println("(int) 0xffee = " + intNumber);
    System.out.println("(float) = " + fNumber);
    System.out.println("(double) = " + dNumber);
    
    System.out.println("Zero = " + zero);
    System.out.println("chrA = " + chrA);
    System.out.println("uniA = "+uniA);
    System.out.println("Your name is " + name);
  }
}