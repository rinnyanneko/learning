public class 人物 {
    public static boolean 狀態;
    public int 功擊力 = 100;
    public void 功擊(){
        if(狀態){
            System.out.println(功擊力*2);
        }else{
            System.out.println(功擊力);
        }
    }
    public void 吃仙丹(){
        狀態 = true;
    }
    /*
    public static void test(){
        功擊();
        i = 5;
    }*/
}
