//�x�s�ɦW�Gd:\Chap02\J210_Assignment.java
public class J209_Assignment
{
	public static void main(String[] args)
	{
		float a, b, c, d, x = 6; //�ŧi�ܼ�a,b,c,d, x���6 
		int f = 20;//�ŧi����ܼƨó]��l��
		a = b = c = d = 20;	//���w a=b=c=d=20 �@�P���w�ȳ]20
		System.out.print ("a = b = c = d = f = 20,");
		System.out.println (" x = 6");	//��X�r��
                //���ӽƦX���w�B��l
		System.out.println ("a += x = " + (a += x));	//��Xa��
		System.out.println ("b -= x = " + (b -= x));	//��Xb��
		System.out.println ("c *= x = " + (c *= x));	//��Xc��
		System.out.println ("d /= x = " + (d /= x));	//��Xd��
                System.out.println ("20 / 6 = " + (20 / 6));	//��X���
                System.out.println ("20 / 6 = " + (20.0F / 6));	//��X��Ǽ�(�B�I��)
		System.out.println ("f %= x = " + (f %= 6));	//��Xf�� (%�D�l��)
	}
}
