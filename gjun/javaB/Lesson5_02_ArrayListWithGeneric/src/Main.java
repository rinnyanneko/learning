import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {
        ArrayList listA = new ArrayList();
        listA.add(1);
        listA.add(2);
        listA.add(3);
        listA.add(4);
        listA.add(5);
        //listA.add("5");
        int total = 0;
        for (int i = 0; i < listA.size(); i++){
            if (listA.get(i) instanceof Integer) {
                int j = (Integer) listA.get(i);
                total += j;
            }
        }
        System.out.println(total);

        for (Object o : listA){

        }

        ArrayList<Integer> listB = new ArrayList();
        listB.add(1);
        listB.add(2);
        listB.add(3);
        listB.add(4);
        listB.add(5);
        //listB.add("5");
        total = 0;
        for (int i = 0; i < listA.size(); i++){
                int j = listB.get(i);
                total += j;
        }
        System.out.println(total);

        for (int i : listB){

        }
    }
}
