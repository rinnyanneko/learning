// �ɦW�GJ302_CheckMultiple.java
public class J302_CheckMultiple {
    public static void main(String[] args) {
        //�ŧi�����ܼ� keyin
        java.util.Scanner keyin;
        //�إ�Scanner���O��������
        keyin = new java.util.Scanner(System.in);
        System.out.print("�п�J���: ");
        int iNum = keyin.nextInt();
        //���V��ܵ��c
        if (iNum%2 == 0) //�YiNum�O2������
        {
            System.out.println(iNum + " �O2����");
        } 
        else //�YiNum�D2������
        {
            System.out.println(iNum + " ���O2����");
        }
    }
}
