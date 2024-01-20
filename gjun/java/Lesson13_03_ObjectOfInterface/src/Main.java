import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class Main {
    public static void main(String[] args) {
        String[] words = {"abc","def","ghij","klmno","pqr","stuv","wxyz"};
        //List<String> list = Arrays.asList(words);
        List<String> list = new ArrayList(Arrays.asList(words));
        list.replaceAll(i -> i.toUpperCase());
        System.out.println(list);
        list.removeIf(i -> i.length() <= 3);
        System.out.println(list);
    }
}
