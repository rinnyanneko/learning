public class NewClass {
    private int x = 10;
    public int m1(){
        /*
        if(x <= 100){
            System.out.println("Wrong  in m1");
        }*/
        assert x > 100 : "The value is : " + x;
        return m2();
    }
    private int m2(){
        /*
        if(x <= 1000){
            System.out.println("Wrong  in m2");
        }*/
        assert x > 1000;
        return m3();
    }
    private int m3(){
        /*
        if(x <= 10000){
            System.out.println("Wrong  in m3");
        }*/
        assert x > 10000 ;
        return x;
    }
}
