import java.io.FileReader;

public class Main {
    public static void main(String[] args) {
        //demoA("4");
        //demoA("4a");
        //demoA("0");
        System.out.println(demoB(0));
    }
    public static int demoB(int x){
        try{
            int y = 100 / x;
        }catch(Exception e){
            System.out.println(1);
            return 3;
        }finally{
            System.out.println(2);
        }
        return  0;
    }
    public static void demoA(String s){
        try{
            int i = Integer.parseInt(s);
            int j = 10000 / i;
            System.out.println(1);
        }catch(NumberFormatException e){
            System.out.println(3);
        }finally{
            System.out.println(5);
        }
        System.out.println(4);
    }
}
