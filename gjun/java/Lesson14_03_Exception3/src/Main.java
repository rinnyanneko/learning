public class Main {
    public static void main(String[] args) {
        String[] array = {"10","12a","0",null};
        for(int i= 0; i < array.length; i++){
            try{
                doThis(array[i]);
            }catch(NumberFormatException  e){
                doThis("1");
            }catch(ArithmeticException e){
                doThis("10");
            }catch(RuntimeException e){
                System.out.println("RuntimeException");
            }catch(Throwable e){
                System.out.println("Wrong");
            }
        }
        /*
        try{
            for(int i= 0; i < array.length; i++){
                doThis(array[i]);
            }
        }catch(NumberFormatException  e){
            doThis("1");
        }catch(ArithmeticException e){
            doThis("10");
        }

*/
    }
    public static void doThis(String s)throws NumberFormatException, ArithmeticException{
        doThat(Integer.parseInt(s));
    }
    public static void doThat(int i)throws ArithmeticException{
        System.out.println(100/i);
    }
}
