//�w�j�Ƨ�
//���]�}�C5����Ƥ����A�`�@������ơG4+3+2+1=10��
//N ����ơGN*(N-1)/2 , �Ҧp:5*(5-1)/2=10��
public class BubbleSortTest {
    public static void main(String[] args) {
        int[] data = {20,12,28,5,9}; //�@���}�C
        for(int i=data.length-1;i>0;i--){
            for(int j=0;j<i;j++){
                //���W�ƧǤ���A�e�褸���j����A���ƴN�洫��m
                if(data[j]>data[j+1]){
                    int temp = data[j];
                    data[j]  = data[j+1];
                    data[j+1]= temp;
                }
            }//��for-loop
        }//�~for-loop
        //��ܱƧǫ���
        for(int index=0;index<data.length;index++){
            System.out.printf("data[%d]=%d  ", index,data[index]);
        }
        System.out.println();//����        
    }
}
