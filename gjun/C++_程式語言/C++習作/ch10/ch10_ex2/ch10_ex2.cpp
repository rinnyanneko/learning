#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream file1,file2;   
    char tempword[500];   //  �x�s �Ʀ�
    char ch;  // Ū���@�Ӧr�� 
 	int pi=0; // pi �O���@���h�֭Ӧr�� 
	file1.open("in_a.txt",ios::in);    // ��J 
	file2.open("out_a.txt", ios::out); // ��X
    do{
          file1.get(ch);  // Ū���@�Ӧr��         
          if (ch>='A' && ch<='Z')
              *(tempword+pi)=ch + 32;
          else if (ch>='a' && ch<='z')
              *(tempword+pi)=ch - 32;
          else 
              *(tempword+pi)=ch;
          pi++;  // pi �O���@���h�֭Ӧr�� 
    } while (! file1.eof());
    
    *(tempword+pi)='\0';    // �N �r�� tempword �[�W�����r�� 
    cout << tempword << endl;
    file2 << tempword << endl;   
	file1.close();
	file2.close();
    system("pause");
    return 0;
}
