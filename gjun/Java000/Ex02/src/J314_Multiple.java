// �x�s�ɦW�GJ314_Multiple.java
public class J314_Multiple {

    public static void main(String[] args) {
        int count;
        System.out.print("1 �� 30 �� 3 �����Ƭ��G");
        for (count=1; count<=30; count++) // �w�q�j��
        {
            if (count%3 != 0) // �Y���O3������
            {
                //break;	     // ���_�j��@��
                continue;  // ��^�j��_�I�A�~��U�@�j��(���~���@��)
            }						
            System.out.print(count + "  "); //���3�����ƨêŮ�
        }
        System.out.println(); //����
    }
}
