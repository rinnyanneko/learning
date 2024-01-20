import java.io.FileNotFoundException;
import java.io.FileReader;
public class Main {
    public static void main(String[] args) {
        openFile("abc.txt");
        try{
            openFile2("abc.txt");
        }catch(FileNotFoundException e){
            e.printStackTrace();
        }
    }
    public static  void openFile(String name){
        try{
            FileReader fr = new FileReader(name);
        }catch(FileNotFoundException e){
            e.printStackTrace();
        }
    }
    public static  void openFile2(String name)throws FileNotFoundException{
        FileReader fr = new FileReader(name);
    }
}
