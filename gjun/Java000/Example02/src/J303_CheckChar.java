// �x�s�ɦW J303_CheckChar.java

public class J303_CheckChar {

    public static void main(String[] args) throws java.io.IOException {
        char inChar;
        System.out.print("�Ы����N��G");
        inChar = (char) System.in.read();  //inChar=��J�@�Ӧr��
        if (inChar >= 'A' && inChar <= 'Z'){ //�YinChar���j�g�r��
            System.out.println(inChar + " ���j�g�r��");
        } 
        else if (inChar >= 'a' && inChar <= 'z'){ //�YinChar���p�g�r��
            System.out.println(inChar + " ���p�g�r��");
        } 
        else if (inChar >= '0' && inChar <= '9'){ //�YinChar���Ʀr�r��
            System.out.println(inChar + " ���Ʀr�r��");
        } 
        else{ //�_�hinChar���Ÿ��r��
            System.out.println(inChar + " ���Ÿ��r��");
        }
        System.out.println("\n*** �����h�V���c ***");
    }
}
