// �x�s�ɦW�GJ305_CheckNumber.java

public class J305_CheckNumber {
    public static void main(String[] args) throws java.io.IOException {
        java.util.Scanner keyin;
        keyin = new java.util.Scanner(System.in);
        
        System.out.print("�п�J���: ");
        int iNum = keyin.nextInt(); //�i��J���
        System.out.print(iNum + " �O");
        System.out.println((iNum >= 0) ? "����" : "�t��"); //�ϥΤT���B��l
        System.out.println("--------------------");
        int num1 = 100;
        int num2 = 102;
        int ans = (num1 > num2) ? num1 : num2; //�ϥΤT���B��l
        System.out.println("��Ƴ̤j�Ȭ�:" + ans);
    }
}
