
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import java.util.logging.Level;
import java.util.logging.Logger;
public class Main {
    public static void main(String[] args) {

    }
    public static void demoD(int x){
        try{
            if(x < 0){
                throw new MyException();
            }
            int j = 1000 / x;
        }catch(MyException e){
            System.out.println(1);
        }catch(Exception e){
            System.out.println(2);
        }
    }
    public static void demoC(int x)throws MyException{
        if(x == 0){
            throw new MyException();
        }
    }
    public static void demoB(String fileName){
        try (FileReader fr = new FileReader(fileName)){
            int s = fr.read();
        } catch (NumberFormatException | FileNotFoundException ex) {
            Logger.getLogger(Lesson4_02_tryWithResource.class.getName()).log(Level.SEVERE, null, ex);
        } catch (IOException ex) {
            Logger.getLogger(Lesson4_02_tryWithResource.class.getName()).log(Level.SEVERE, null, ex);
        }
    }
    public static void demoA(String fileName){
        FileReader fr = null;
        try {
            fr = new FileReader(fileName);
            int s = fr.read();
        } catch (FileNotFoundException ex) {
            Logger.getLogger(Lesson4_02_tryWithResource.class.getName()).log(Level.SEVERE, null, ex);
        } catch (IOException ex) {
            Logger.getLogger(Lesson4_02_tryWithResource.class.getName()).log(Level.SEVERE, null, ex);
        }finally{
            try {
                fr.close();
            } catch (IOException ex) {
                Logger.getLogger(Lesson4_02_tryWithResource.class.getName()).log(Level.SEVERE, null, ex);
            }
        }
    }
}
