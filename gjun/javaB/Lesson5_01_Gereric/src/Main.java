public class Main {
    public static void main(String[] args) {
        ArrayOperator<String> ao = new ArrayOperator<String>();
        ao.displayArray(new String[]{"aa","bb","cc","dd","ee"});
        ArrayOperator<Integer> ao2 = new ArrayOperator<>();
        ao2.displayArray(new Integer[]{1,2,3,4,5});
        ArrayOperator<Double> ao3 = new ArrayOperator<>();
        ao3.displayArray(new Double[]{1.0,2.0,3.0,4.0,5.0});

        CatchAny<StringBuilder> ca4;
        CatchAny ca = new CatchAny();
        ca.setT(new int[]{1,2,3});
        System.out.println(ca.getT());
        CatchAny<String> ca2 = new CatchAny<>();
        ca2.setT("aaa");
        System.out.println(ca2.getT().length());
        CatchAny ca3 = new CatchAny<>();
        ca3.setT("aaa");
        //System.out.println(ca3..getT().length());


        ca4 = new CatchAny<>();
    }
}
