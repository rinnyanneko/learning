public class Main {
    public static void main(String[] args) {
        A a = new A(){
            @Override
            public void x(){
                System.out.println("Hi");
            }
        };
        a.x();
        B b = new B(5){
            @Override
            public void y(){
                System.out.println(x * x);
            }
        };
        b.y();

    }
}
