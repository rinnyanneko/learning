/* �{���d��: J208_Boolean.java */

public class J208_Boolean {
    // �D��k
    public static void main(String[] args) {
        // �ܼƫŧi
        int a = 6;
        int b = 3;
        boolean blnA = a > b;//����B��
        boolean blnB = a == b;
        // ���դ�����Y�B��l
        System.out.println("�p��: 6<3  ���G�� " + (a < b));
        System.out.println("�j��: 6>3  ���G�� " + (a > b));
        System.out.println("�p�󵥩�: 6<=3 ���G�� " + (a <= b));
        System.out.println("�j�󵥩�: 6>=3  ���G�� " + (a >= b));
        System.out.println("����: 6==3  ���G�� " + (a == b));
        System.out.println("������: 6!=3  ���G�� " + (a != b));
        // �����޿�B��l
        System.out.println("A����B�⦡: " + blnA);
        System.out.println("B����B�⦡: " + blnB);
        System.out.println("NOT����B��: !A ���G�� " + (!blnA));
        System.out.println("AND����B��: A && B ���G�� " + (blnA && blnB));
        System.out.println("OR����B��: A || B ���G�� " + (blnA || blnB));
        System.out.println("XOR����B��: A ^ B ���G�� " + (blnA ^ blnB));
    }
}
