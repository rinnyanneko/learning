public class GoodBonus {
    public static double getPercent(Employee e){
        if(e instanceof Administrator){
            return 2;
        }else if(e instanceof Manager || e instanceof Engineer){
            return 3;
        }
        return 5;
    }
}
