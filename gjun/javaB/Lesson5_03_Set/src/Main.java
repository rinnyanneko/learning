import java.util.HashSet;
import java.util.TreeSet;

public class Main {
    public static void main(String[] args) {
        HashSet<Integer> set = new HashSet<>();
        set.add(1);
        set.add(2);
        set.add(3);
        set.add(1);
        set.add(2);
        set.add(3);
        set.add(4);
        set.add(5);
        set.add(311);
        set.add(115);
        System.out.println(set);
        TreeSet<Integer> tset = new TreeSet<>();
        tset.add(1);
        tset.add(2);
        tset.add(3);
        tset.add(1);
        tset.add(2);
        tset.add(3);
        tset.add(4);
        tset.add(5);
        tset.add(311);
        tset.add(115);
        System.out.println(tset);
    }
}
