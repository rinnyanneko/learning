public class DataTypeConversion {
    public static void main(String[] args) {
        //數字間的轉換
        //小轉大(自動)
        byte w = 3;
        int x = w;
        System.out.println(x);
        long y = x;
        System.out.println(y);
        double z = y;
        System.out.println(z);
        //大轉小(強制)
        int a = 3;
        byte b = (byte)a;
        System.out.println(b);
        long c = 102400;
        int d = (int)c;
        System.out.println(d);
        float e = (float)3.1415926535;
        System.out.println(e);
        //字串轉數字
        String f = "37";
        int g = Integer.parseInt(f);
        System.out.println(g);
        f = "3.14";
        double h = Double.parseDouble(f);
        System.out.println(h);
        //數字轉字串
        int i = 34;
        String j = String.valueOf(i);
        System.out.println(j);
        long k = 999999999;
        String l = String.valueOf(k);
        System.out.println(l);
        String m = String.valueOf(3.14159);
        System.out.println(m);
    }
}
