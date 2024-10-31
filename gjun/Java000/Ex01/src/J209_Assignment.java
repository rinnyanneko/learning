//儲存檔名：d:\Chap02\J210_Assignment.java
public class J209_Assignment
{
	public static void main(String[] args)
	{
		float a, b, c, d, x = 6; //宣告變數a,b,c,d, x初值6 
		int f = 20;//宣告整數變數並設初始值
		a = b = c = d = 20;	//指定 a=b=c=d=20 一同指定值設20
		System.out.print ("a = b = c = d = f = 20,");
		System.out.println (" x = 6");	//輸出字串
                //五個複合指定運算子
		System.out.println ("a += x = " + (a += x));	//輸出a值
		System.out.println ("b -= x = " + (b -= x));	//輸出b值
		System.out.println ("c *= x = " + (c *= x));	//輸出c值
		System.out.println ("d /= x = " + (d /= x));	//輸出d值
                System.out.println ("20 / 6 = " + (20 / 6));	//輸出整數
                System.out.println ("20 / 6 = " + (20.0F / 6));	//輸出精準數(浮點數)
		System.out.println ("f %= x = " + (f %= 6));	//輸出f值 (%求餘數)
	}
}
