// �x�s�ɦW�GJ309_Factorial.java

public class J309_Factorial {

    public static void main(String[] args) {
        java.util.Scanner input = new java.util.Scanner(System.in);
        int num = 0;
        int sum = 0;
        System.out.println("�H�U�п�J�������(��J0����)");
        //����հj�魫�е��c
        do {

            num = input.nextInt();
            sum += num;

        } while (num != 0);
        System.out.println("��������`�p = " + sum + " ��");
    }
}
