// T 為使用者指定的 type, 若未指派, 預設為 Object
public class ArrayOperator <T>{
    public void displayArray(T[] array){
        for(T s : array){
            System.out.print(s + " ");
        }
        System.out.println();
    }
    /*
    public void displayArray(String[] array){
        for(String s : array){
            System.out.print(s + " ");
        }
        System.out.println();
    }
    public void displayArray(Integer[] array){
        for(Integer s : array){
            System.out.print(s + " ");
        }
        System.out.println();
    }
    public void displayArray(Double[] array){
        for(Double s : array){
            System.out.print(s + " ");
        }
        System.out.println();
    }
*/
}
