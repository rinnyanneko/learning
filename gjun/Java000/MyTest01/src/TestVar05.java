import java.util.Scanner;
public class TestVar05 {
    public static void main(String[] args) {
        Scanner keyin = new Scanner(System.in);
        int x = 5, y = 10, z = 8, max;
        System.out.print("請輸入數字一：");
        x = keyin.nextInt();
        System.out.print("請輸入數字二：");
        y = keyin.nextInt();
        System.out.print("請輸入數字三：");
        z = keyin.nextInt();
        if (x > y){
            if (x > z){
                max = x;
            }else{
                max = z;
            }
        }else{
            if(y > z){
                max = y;
            }else{
                max = z;
            }
        }
        System.out.println("三數最大值：" + max);
        javax.swing.JOptionPane.showMessageDialog(null, "三數最大值：" + max);
    }
}
