// �x�s�ɦW�GJ202_Convert.java

public class J202_Convert {
    //�૬ casting
    public static void main(String[] args) {
        int iSource = 500;		//iSource = 500
        byte bTarget = (byte) iSource;	//bTarget = -12 ��ƥ��u
        byte bSource = 65;		//bSource = 65
        char cTarget = (char) bSource;	//cTarget = 'A'
        float fSource = 65535.0f;	//fSource = 65535.0
        short sTarget = (short) fSource;//sTarget = -1 ��ƥ��u

        System.out.println("iSource = " + iSource);
        System.out.println("bTarget = " + bTarget);
        System.out.println("bSource = " + bSource);
        System.out.println("cTarget = " + cTarget);
        System.out.println("fSource = " + fSource);
        System.out.println("sTarget = " + sTarget);
    }
}
