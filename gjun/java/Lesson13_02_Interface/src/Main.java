public class Main {
    public static void main(String[] args) {
        returnSomething(new Shirt());
        returnSomething(new Socks());
        //returnSomething(new CustomClothes());
        returnSomething(new Tent());
    }
    public static void returnSomething(Returnable s){
        if(s instanceof Tent){
            boolean x = ((Tent)s).test(10);
            if(x){
                s.doReturn();
            }
        }else{
            s.doReturn();
        }
    }
}
