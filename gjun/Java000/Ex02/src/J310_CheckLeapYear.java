// �x�s�ɦW�GJ310_CheckLeapYear.java

import java.io.*;

public class J310_CheckLeapYear {

    public static void main(String[] args) throws IOException {
        //�إ߶ǲ�IO����(��X�J����)
        BufferedReader line = new BufferedReader(new InputStreamReader(System.in));
        int year;
        do {    //�Y��J���O0�h�j�馨��
            System.out.print("�п�J�褸�~���A�Y��J 0 �h�����G");
            year = Integer.parseInt(line.readLine()); //��J�ç�r���૬��int
            //�h�V��ܵ��c
            if (year % 4 != 0) // �Yyear���O4������
            {
                System.out.println(year + "�~���O�|�~");
            } 
            else if (year % 100 == 0) // �O4�����Ƥ]�O100������
            {
                if(year % 400 == 0){ // �]�O400������
                    System.out.println(year + "�~�O�|�~");
                }else{ // ���O400������
                    System.out.println(year + "�~���O�|�~");
                }
            } 
            else // �O4�����Ƥ��O100������
            {
                System.out.println(year + "�~�O�|�~");
            }
        } while (year != 0); //�Y��J���O0�h�j�馨��
    }
}
