import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;


public class Main {

    public static void main(String[] args) {
        String words[] = {"Java","JAVA","java","JAva","JaVa"};
        Arrays.sort(words);
        System.out.println(Arrays.toString(words));

        ArrayList<Integer> list = new ArrayList<>();
        list.add(1);
        list.add(15);
        list.add(14);
        list.add(19);
        list.add(18);
        Collections.sort(list);
        System.out.println(list);

        Member m2 = new Member("M002","Mary",19);
        Member m3 = new Member("M003","Bod",17);
        Member m1 = new Member("M001","John",18);
        ArrayList<Member> listB = new ArrayList<>();
        listB.add(m1);
        listB.add(m2);
        listB.add(m3);
        Collections.sort(listB);
        System.out.println(listB);
        Collections.sort(listB, new Comparator<Member>(){
            @Override
            public int compare(Member m1, Member m2){
                return m1.getId().compareTo(m2.getId());
            }
        });
        System.out.println(listB);
    }

}
