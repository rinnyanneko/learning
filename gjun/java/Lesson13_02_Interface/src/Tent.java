public class Tent extends OutDoor implements Returnable{
    @Override
    public void doReturn(){
        System.out.println("Tent is returning back.");
    }
    public boolean test(int i){
        if(i < 10){
            return false;
        }
        return true;
    }
}
