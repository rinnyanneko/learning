// 儲存檔名：J316_Lable.java

public class J315_Label {
    public static void main(String args[]) {
        Lab1: //自訂標籤名稱，僅可寫在迴圈敘述的上一行
        for (int i = 1; i <= 10; i++) {
            for (int j = 1; j <= i; j++) {
//                 if(i>5){
//                    System.out.println("@");
//                    break Lab1;  //強制跳離到自訂標籤名稱Lab1,也跳離了外迴圈
//                 }
                System.out.print(j);
            }
            System.out.println();
        }
        System.out.println("巢狀迴圈執行結束了.....");
    }
}
