// �x�s�ɦW�GJ304_MenuSelect.java

public class J304_MenuSelect {
    public static void main(String[] args) throws java.io.IOException {
        char inChar;
        System.out.print("�п�J���~�N��(A.�ï]���� B.������� C.�C���):");
        inChar = (char) System.in.read(); //inChar=��J�@�Ӧr��
        switch (inChar) {
            case 'A':	//�YinChar��A�r��
            case 'a':	//��inChar��a�r��
                System.out.println("�A��F�ï]����");
                break;  //����switch���c�϶�
            case 'B':	
            case 'b':	
                System.out.println("�A��F�������");
                break;
            case 'C':	
            case 'c':	
                System.out.println("�A��F�C���");
                break;
            default:	//inChar����L�r��
                System.out.println("�п�Ja,b,c ��ܲ��~");
        }
        System.out.println("\n*** ����switch�h�V���c ***");
    }
}
