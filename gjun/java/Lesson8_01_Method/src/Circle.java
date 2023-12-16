public class Circle {


//return(返回)
//void方法return後的敘述不執行
//非void方法會執行

    public int radius;
    //void表示運算結果不是值
    //呼叫敘述必須為單獨敘述
    public void showRadius(){
        if (radius<0){
            return; //返回caller method
        }
        System.out.println("The radius is: " + radius);
    }
    public void showGrith(){
        if (radius<0){
            return; //返回caller method
        }
        System.out.println("The grith is: " + radius * 2 * 3.14159);
    }
    public void showArea(){
        if (radius<0){
            return; //返回caller method
        }
        System.out.println("The area is: " + radius * radius * 3.14159);
    }
    public void setRadius(int r){
        if (r>0){
            radius = r;
        }
    }

    //非void方法 呼叫敘述就是return後面的值 必須是指定type的值
    public double getGrith(){
        if (radius < 0){
            return -1;
        }
        return radius * 2 * 3.14159;
    }
    public double getArea(){
        if (radius < 0){
            return -1;
        }
        return radius * radius * 3.14159;
    }
}