import java.util.ArrayList;
public class Main {
    public static void main(String[] args) {
        ArrayList<Integer> number = new ArrayList();
        number.add(8);
        number.add(18);
        number.add(28);
        number.add(38);
        //number.add("111");
        number.add(1, 20);
        System.out.println(number);
        number.remove(1);
        System.out.println(number);
        /*int x = number.indexOf(25);
        if (x!=-1){
            number.remove(number.indexOf(25));
        }*/
        number.remove(new Integer(25));
        for (int i = 0 ; i < number.size() ; i++){
            System.out.println(number.get(i));
        }
        int total = 0;
        for (int i = 0 ; i < number.size() ; i++){
            total+=number.get(i);
        }
    }
}
