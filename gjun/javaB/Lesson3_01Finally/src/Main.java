import java.io.FileReader;

public class Main {
    public static void main(String[] args) {
        demoA("4");
        demoA("4a");
    }
    /*
    public static void demoA(String s) {
        try {
            int i = Integer.parseInt(s);
            int j = 10000 / i;
            System.out.println(1);
        }catch (NumberFormatException c){
            System.out.println(3);
        }finally {
            System.out.println(5);
        }
        System.out.println(4);
    }
}
*/
public static void demoA(String fileName){
    FileReader fr = null;
    try{
        fr = new FileReader(fileName);
        int s = fr.read();
    }
}
