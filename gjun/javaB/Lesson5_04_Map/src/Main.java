import java.util.ArrayList;
import java.util.Set;
import java.util.TreeMap;
public class Main {
    public static void main(String[] args) {
        Member m1 = new Member("M001","John",18);
        Member m2 = new Member("M002","Mary",19);
        Member m3 = new Member("M003","Bod",17);

        //HashMap<String, Member> map = new HashMap<>();
        TreeMap<String, Member> map = new TreeMap<>();
        map.put(m1.getId(), m1);
        map.put(m2.getId(), m2);
        map.put(m3.getId(), m3);
        map.putIfAbsent("M001", m3);

        System.out.println(map.get("M002"));
        System.out.println(map);

        Set<String> keys = map.keySet();
        //System.out.println(keys);
        for(String key : keys){
            System.out.println(map.get(key));
        }

        //Collection<Member> values = map.values();
        ArrayList<Member> values = new ArrayList<>(map.values());
        for(int i = 0; i < values.size(); i++){
            System.out.println(values.get(i));
        }
    }
}
