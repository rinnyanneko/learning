// �x�s�ɦW�GJ206_Arithmetic.java

public class J206_Arithmetic {

    public static void main(String[] args) {
        byte a=1, b=4, c=4;	//�ŧi�ê�la, b, c��
        int x = b * b - a * c;	//�ŧi�ë��wx��
        int c1 = 25 - 5 * 4 / 2 - 10 + 4;
        int c2 = (((25 - 5) * 4) / (2 - 10)) + 4;
        System.out.println("x=" + x);
        System.out.println("a=" + a);	//��X�r��Ba��
        System.out.println("b=" + b);	//��X�r��Bb��
        System.out.println("c=" + c);	//��X�r��Bc��
        System.out.println("c1=" + c1);
        System.out.println("c2=" + c2);
    }
}
