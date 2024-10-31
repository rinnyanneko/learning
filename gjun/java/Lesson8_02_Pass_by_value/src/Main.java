public class Main {
    public static void main(String[] args) {
        //pass by value
        //變數的值cp並指派給參數
        //若是參考變數 worker method可以修改caller method中物件的值
        //除非該物件為不可變動物件 例：String
        A a = new A();
        int p = 10;
        a.x(p);
        System.out.println(p);
        int[] q = {1, 2, 3};
        a.y(q);
        System.out.println(q[0]);
        StringBuilder b = new StringBuilder("Java");
        a.z(b);
        System.out.println(b);
        String s = "Java";
        a.t(s);
        System.out.println(s);
    }
}