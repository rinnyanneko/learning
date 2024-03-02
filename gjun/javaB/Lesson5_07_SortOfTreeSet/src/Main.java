import java.util.Comparator;
import java.util.TreeSet;


public class Main {

    public static void main(String[] args) {
        Member m1 = new Member("M001","John",18);
        Member m2 = new Member("M002","Mary",19);
        Member m3 = new Member("M003","Bod",17);
        TreeSet<Member> setA = new TreeSet<>();
        setA.add(m1);
        setA.add(m2);
        setA.add(m3);
        System.out.println(setA);

        TreeSet<Member> setB = new TreeSet<>(new MemberSortByAge());
        setB.add(m1);
        setB.add(m2);
        setB.add(m3);
        System.out.println(setB);

        //new 匿名類別的物件堂參數.
        TreeSet<Member> setC = new TreeSet<>(new Comparator<Member>(){
            public int compare(Member m1, Member m2){
                return m1.getName().hashCode() - m2.getName().hashCode();
            }
        });
        setC.add(m1);
        setC.add(m2);
        setC.add(m3);
        System.out.println(setC);

        // Lambda Expression
        TreeSet<Member> setD = new TreeSet<>((Member o1, Member o2)-> o1.getName().hashCode() - o2.getName().hashCode());
        setD.add(m1);
        setD.add(m2);
        setD.add(m3);
        System.out.println(setD);

    }

}
