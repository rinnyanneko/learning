public class Main {
    public static void main(String[] args) {
        Circle c1 = new Circle();
        //method=>
        //中斷caller method 運行worker method
        c1.setRadius(100);
        c1.showRadius();
        c1.showGrith();
        c1.showArea();
        c1.radius = -10;
        c1.showRadius();
        c1.showGrith();
        c1.showArea();
        System.out.println(c1.getArea());
        double grith = c1.getGrith();
        System.out.println(grith);
    }
}