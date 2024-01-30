public class Main {
    public static void main(String[] args) {
        System.out.println(Week.getDay(Week.SATURDAY));
        System.out.println(Week.getDay(10000000));
        System.out.println(NewWeek.getDay(Day.SUNDAY));
        System.out.println(NewWeek.getDay(OldDay.THURSDAY));
        for (Day d : Day.values()){
            System.out.println(d);
        }
    }
}
