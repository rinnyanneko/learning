public interface Accessible extends SuperInterface{
    public default void methodA(){
        methodC();
        System.out.println("methodA in Accessible");
    }
    public default void methodB(){
        methodC();
        System.out.println("methodB in Accessible");
    }
    private void methodC(){
        methodE();
        System.out.println("methodC in Accessible");
    }
    static void methodD(){
        methodE();
        System.out.println("methodD in Accessible");
    }
    private static void methodE(){
        System.out.println("methodE in Accessible");
    }
}
