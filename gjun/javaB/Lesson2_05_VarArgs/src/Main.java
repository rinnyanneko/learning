public class Main {
    public static void main(String[] args) {
        methodA();
        methodA(1,2,3,4,5);
        methodA(1);
    }
    // 完全符合->Promotion->Auto boxing->Var args.
    public static void methodA(Integer a){
        System.out.println("A2");
    }
    public static void methodA(int... num){
        for(int i : num){
            System.out.print(i + " ");
        }
        if(num.length == 0){
            System.out.print("Nothing to show.");
        }
        System.out.println("A");
    }
    // 1. 參數列中可以有多個參數, 但最多一個 var args.
    // 2. var args 必須是最後一個參數
    public static void methodB(int a, int... num){
        for(int i : num){
            System.out.print(i + " ");
        }
        if(num.length == 0){
            System.out.print("Nothing to show.");
        }
        System.out.println("B");
    }
}
