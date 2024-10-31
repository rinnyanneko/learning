import java.time.Instant;
import java.time.Duration;
import java.util.Arrays;
public class Sort {
    public static void bubbleStart(double[] a){
        System.out.println(Arrays.toString(a));
        System.out.println("Start sorting...");
        Instant startTime = Instant.now();

        a = bubbleSort(a);
        System.out.println("Finished...");
        System.out.println(Arrays.toString(a));
        Instant endTime = Instant.now();
        System.out.println("Time：" + Duration.between(startTime, endTime).toMillis() + " ms");
    }
    private static double[] bubbleSort(double[] array){
        double temp;
        for (int i = 0; i < (array.length-1);i++){
            for (int j = 0; j < (array.length-2-i);j++){
                if (array[j]<array[j+1]) {
                    temp = array[j];
                    array[j] = array[j+1];
                    array[j+1] = temp;
                }
            }
        }
        return array;
    }
    private static double[] quickSort(double[] array){

        return array;
    }

}
