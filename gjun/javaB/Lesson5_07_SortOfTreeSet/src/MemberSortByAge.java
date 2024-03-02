import java.util.Comparator;


public class MemberSortByAge implements Comparator<Member>{
    @Override
    public int compare(Member m1, Member m2){
        return m1.getAge() - m2.getAge();
    }
}