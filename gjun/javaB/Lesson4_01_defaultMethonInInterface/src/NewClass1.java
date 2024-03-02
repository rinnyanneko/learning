public class NewClass1 implements Accessible{
    @Override
    public void methodA(){
        Accessible.super.methodA();
        System.out.println("methodA in NewClass1");
    }
}
