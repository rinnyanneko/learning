import java.util.List;
import java.util.Map;
import static java.util.Map.entry;
import java.util.Set;


public class Main {

    public static void main(String[] args) {
        List<Integer> list = List.of(1,2,3,4,5,6,7);
        //list.add(8);
        System.out.println(list);
        Set<Integer> set = Set.of(1,2,3,4,5,6,7);
        //set.add(9);
        System.out.println(set);
        Map<Integer, Integer> map = Map.of(1,2,3,4,5,6,7,8);
        //map.put(11,11);
        System.out.println(map);
        Map<Integer, Integer> map2 = Map.ofEntries(
                entry(1,2),entry(11,12),entry(21,22),entry(31,32),entry(41,42));
        System.out.println(map2);
    }

}