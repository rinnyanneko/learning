import java.util.ArrayDeque;
import java.util.Deque;
public class Main {
    public static void main(String[] args) {
        Deque<Integer> d = new ArrayDeque<>();
        d.add(1);
        d.add(2);
        d.add(3);
        System.out.println(d.remove());
        System.out.println(d.remove());
        d.add(4);
        d.add(5);
        while(d.size() != 0){
            System.out.println(d.remove());
        }
        System.out.println("-----------------------");
        d.push(1);
        d.push(2);
        d.push(3);
        System.out.println(d.pop());
        System.out.println(d.pop());
        d.push(4);
        d.push(5);
        while(d.size() != 0){
            System.out.println(d.pop());
        }
        System.out.println("-----------------------");

        d.add(1);
        d.add(2);
        d.add(3);
        System.out.println(d.pop());
        System.out.println(d.pop());
        d.add(4);
        d.add(5);
        while(d.size() != 0){
            System.out.println(d.pop());
        }
        System.out.println("-----------------------");
        d.push(1);
        d.push(2);
        d.push(3);
        System.out.println(d.remove());
        System.out.println(d.remove());
        d.push(4);
        d.push(5);
        while(d.size() != 0){
            System.out.println(d.remove());
        }
        System.out.println("-----------------------");
        d.add(1);
        d.add(2);
        d.add(3);
        System.out.println(d.pop());
        System.out.println(d.pop());
        d.push(4);
        d.push(5);
        while(d.size() != 0){
            System.out.println(d.remove());
        }
    }
}
