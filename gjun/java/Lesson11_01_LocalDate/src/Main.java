import java.time.LocalDate;
import java.time.Month;
import java.time.chrono.JapaneseDate;
import java.time.format.DateTimeFormatter;
import java.time.format.FormatStyle;

public class Main {
    public static void main(String[] args) {
        //Factor method 取代 constructor提供物件
        LocalDate date = LocalDate.now();
        System.out.println(date);
        date = date.plusDays(125);
        System.out.println(date);
        String strDate = date.format(DateTimeFormatter.ISO_LOCAL_DATE);
        System.out.println(strDate);
        String strDate2 = date.format(DateTimeFormatter.ofLocalizedDate(FormatStyle.FULL));
        System.out.println(strDate2);
        JapaneseDate jd = JapaneseDate.from(date);
        System.out.println(jd);

        LocalDate date2 = LocalDate.of(2024, Month.JANUARY, 1);
        System.out.println(date2);

        LocalDate date3 = LocalDate.parse("2024-12-31");
        System.out.println(date3);
    }
}
