// �x�s�ɦW�GJ201_Define.java
// �ɮץ\��G��?���O�P�ŧi�ܼ�

public class J201_Define
{
  public static void main(String[] args)
  {
    boolean bNumber = true;
    byte byteNumber = -128;
    short shortNumber = 0xff;  //16�i��A��?���??
    int intNumber = 0xffee;
    float fNumber = 12.5f;     //Java �w�]�B�I�Ƭ� double dada type
    double dNumber = 12.5;
    char zero = '0';	 //�ϥγ�޸�?? ���O�r��0�A���O�ƭ�0
    char chrA = 65;	 // A�r����ASCII Code��65
    char uniA = '\u0041';// A��Unicode��0041
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
    System.out.println("I am Chin-Hsiang Hsu");
    System.out.println("Hello World!");
  }
}