#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream file1,file2;   
    char word[100][10];  // �x�s �Ʀr�r��A�@ 100 �աA�C�� 10 �Ӧr�� 
    char tempword[10];   //  �x�s �Ʀr�r��
    char ch;  // Ū���@�Ӧr�� 
    int r=0;  // �x�s �Ʀr�`�M 
	int pi=0; // pi �O���C�ռƦr���@���h�֭ӼƦr 
	int wi=0; // wi �O�� word[] �}�C����m
	file1.open("in_a.txt",ios::in);    // ��J 
	file2.open("out_a.txt", ios::out); // ��X
    while (! file1.eof())
    {
        pi=0;  //  �w�] �C�ռƦr�Ӽ�=0
        do{
              file1.get(ch);  // Ū���@�Ӧr��         
              if ( ch>='0' && ch <='9') // �N �Ʀr�զX�� tempword 
              {
                  *(tempword+pi)=ch;  
                  pi++;  // pi �O���C�ռƦr���@���h�֭ӼƦr�r�� 
              }
        } while (ch>='0' && ch <='9'); // �J�D�Ʀr�h���U�B�z 
        if (pi>0) // �e�����r��O�ƭ� 
        {
            *(tempword+pi)='\0';        // �N �ƭȦr�� tempword �[�W�����r�� 
            strcpy(word[wi],tempword);  // �ƻs tempword �Ʀr�� word[wi] �}�C 
            wi++; // wi �O�� word[] �}�C����m
        }    
    }
    for (int i=0;i<wi;i++)  // ���X�Ҧ���  word[] �r��}�C
    {
       r += atoi(word[i]);  // �D�`�M�Aatoi() �N�r����ƭ�  
       if ( i<wi-1) // ���̫�Ĥ@�ե~�A�C�ռƦr�᭱�����[�u+�v
       {
          cout << word[i] << "+";  
          file2 << word[i] << "+";
       }
       else        // �̫�@�աA����ܼƭȡA����ܡu+�v
       {
          cout << word[i] ; // ��ܼƭ� 
          file2 << word[i] ;
       }      
    }
    cout << "=" << r << endl;  // �̫�@�ի᭱�h�[�W�u=�v�� �u�`�M�v
    file2 << "=" << r << endl;   
	file1.close();
	file2.close();
    system("pause");
    return 0;
}
