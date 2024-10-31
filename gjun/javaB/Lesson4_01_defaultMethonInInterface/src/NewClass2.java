public class NewClass2 implements Accessible, OtherInterface{
    @Override
    public void methodA(){
        OtherInterface.super.methodA();
    }
}
