//�x�s�ɦW�GJ207_Logic.java

public class J207_Logic {

    public static void main(String[] args) {
        int a=1, b=4, c=4;	//�ŧi�ê�la, b, c��
        boolean x = a<b && a<c;	//�ŧi�ë��w x �� (�޿�B��lAND&& OR||)
        System.out.print("a<b = ");
        System.out.println(a < b); //����B��
        System.out.print("a<c = ");
        System.out.println(a < c);

        System.out.println("a<b && a<c = " + x); //��X x boolean��
    }
}
