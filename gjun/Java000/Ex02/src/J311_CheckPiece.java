// �x�s�ɦW�GJ311_CheckPiece.java

import java.io.*;
public class J311_CheckPiece {

    public static void main(String[] args){
        //�إ�Scanner���O�������� 
        java.util.Scanner keyin = new java.util.Scanner(System.in);
        char inChar;
        int plus = 0, minus = 0, zero = 0;
        do {
            System.out.print("�п�J��ƼƭȡG");
            int inNum = keyin.nextInt();
            //�h�V��ܵ��c true �n����{���X�Ȥ@��ɡA�i�ٲ�{}
            if      (inNum > 0) plus++;   //�Y inNum �j�� 0
            else if (inNum < 0) minus++;  //�Y inNum �p�� 0
            else                zero++;   // �_�h�Y inNum ���� 0
            //�P�_����հj��O�_�A�~��
            System.out.print("�O�_��J�U�@���ƭ� (y/n)�G");
            inChar = keyin.next().charAt(0);     //inChar=��J�@�Ӧr��
        } while (inChar == 'Y' || inChar == 'y');// �Y�r��='Y'�h���ưj��
        System.out.println("----------------------");
        System.out.println("���Ȧ� " + plus  + " ��"); // ��ܥ��ƭӼ�
        System.out.println("�t�Ȧ� " + minus + " ��"); // ��ܭt�ƭӼ�
        System.out.println("�s�Ȧ� " + zero  + " ��"); // ��ܹs���Ӽ�
    }
}
