// �x�s�ɦW�GJ301_ToUpper.java

public class J301_ToUpper {

    public static void main(String[] args) throws java.io.IOException {
        char inkey;
        System.out.print("�Ы����N��G");
        inkey = (char) System.in.read(); //inkey = read()��J�@�Ӧr��
        //��V��ܵ��c�A�Yinkey���p�g�r���ɬ� true
        if (inkey>='a' && inkey<='z'){
            inkey -= 32;  //�p�g�ন�j�g
        }
        System.out.println("��J�r�����G" + inkey);
    }
}
