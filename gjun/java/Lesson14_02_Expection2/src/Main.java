public class Main {
    public static void main(String[] args) {
        String[] array = {"10","12a","0",null};
        for(int i= 0; i < array.length; i++){
            doThis(array[i]);
        }
    }
    public static void doThis(String s){
        try{
            doThat(Integer.parseInt(s));
        }catch(NumberFormatException e){
            System.out.println("Number format is wrong.");
        }
    }
    public static void doThat(int i){
        try{
            System.out.println(100/i);
        }catch(ArithmeticException e){
            System.out.println(e.getMessage());
        }
        /*
        if(i != 0){
             System.out.println(100/i);
        }else{
             System.out.println("by Zero.");
        }*/
    }

}
