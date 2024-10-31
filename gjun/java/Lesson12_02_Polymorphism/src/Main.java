import java.util.ArrayList;
public class Main {
    public static void main(String[] args) {
        // 1. 指派
        // 2. 呼叫 superclass 中的方法
        //3. 執行 subclass Override 的內容.

        Clothing c = new Clothing();
        c.display();
        c = new Shirt();
        c.display();
        c = new Socks();
        c.display();

        Clothing[] array = new Clothing[3];
        array[0] = new Clothing();
        array[1] = new Shirt();
        array[2] = new Socks();
        for(Clothing cc : array){
            cc.display();
        }

        ArrayList<Clothing> list = new ArrayList<>();
        list.add(new Clothing());
        list.add(new Shirt());
        list.add(new Socks());
        for(Clothing ccc : list){
            ccc.display();
        }

        buyClothing(new Clothing());
        buyClothing(new Shirt());
        buyClothing(new Socks());

    }
    //多型應用=>取代 Overload
    public static void buyClothing(Clothing c){
        //System.out.println("Buy a Clothing.");
        c.display();
        if(c instanceof Shirt){
            Shirt s = (Shirt)c;
            s.method();
        }else if(c instanceof Socks){
            ((Socks)c).method();
        }
    }
}
