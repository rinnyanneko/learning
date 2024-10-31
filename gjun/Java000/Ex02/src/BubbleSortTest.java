//泡沫排序
//假設陣列5項資料元素，總共比較次數：4+3+2+1=10次
//N 項資料：N*(N-1)/2 , 例如:5*(5-1)/2=10次
public class BubbleSortTest {
    public static void main(String[] args) {
        int[] data = {20,12,28,5,9}; //一維陣列
        for(int i=data.length-1;i>0;i--){
            for(int j=0;j<i;j++){
                //遞增排序比較，前方元素大於後方，兩資料就交換位置
                if(data[j]>data[j+1]){
                    int temp = data[j];
                    data[j]  = data[j+1];
                    data[j+1]= temp;
                }
            }//內for-loop
        }//外for-loop
        //顯示排序後資料
        for(int index=0;index<data.length;index++){
            System.out.printf("data[%d]=%d  ", index,data[index]);
        }
        System.out.println();//換行        
    }
}
