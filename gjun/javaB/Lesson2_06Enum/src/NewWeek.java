public class NewWeek {
    public static String getDay(Day d){
        switch (d){
            case SUNDAY:return "Sunday";
            case MONDAY:return "Monday";
            case TUESDAY:return "Tuesday";
            case WEDNESDAY:return "Wednesday";
            case THURSDAY:return "Thursday";
            case FRIDAY:return "Friday";
            case SATURDAY:return "Saturday";
            default:return null;
        }
    }
    public static String getDay(OldDay d){
        if(d ==OldDay.SUNDAY){
                return "Sunday";
        }else  if(d==OldDay.MONDAY){
                return "Monday";
        }else  if(d==OldDay.TUESDAY){
                return "Tuesday";
        }else  if(d==OldDay.WEDNESDAY){
                return "Wednesday";
        }else  if(d==OldDay.THURSDAY){
                return "Thursday";
        }else  if(d==OldDay.FRIDAY){
                return "Friday";
        }else  if(d==OldDay.SATURDAY){
                return "Saturday";
        }
        return "";
    }
}
