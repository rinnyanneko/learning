// �x�s�ɦW�GJ308_Power.java

public class J308_Power {

    public static void main(String[] args) {
        int count = 1, power = 1;	// while �j����
        System.out.println("�p��\t2�� N ����");
        while (count <= 10) //�j�饬�L����
        {
            power += power;	// �p�⥭��
            System.out.println(count + "\t" + power);// ��X�p�ƭȻP�����
            count++;		// �p�ƭȥ[ 1
        }
    }
}
