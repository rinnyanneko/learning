#include <iostream> 
#include <fstream> 
using namespace std; 
int main()
{
    fstream file;       // �إ��ɮ׿�X�B��J���� 
	char word[100][20]; // �i�x�s 100 �Ӧr�y�A�C�Ӧr�y�̦h�i�s 20 �Ӧr�� 
	char buffer[80];    // �C�@���r���� 
    char *s;      // �Ȧs�r����ѫ᪺�r�y
    int count=0;  // �@���h�֭Ӧr��(�r�y)
    file.open("in_a.txt",ios::in);
    // in_a.txt ��r���e 
    // One Two Three
    // Four Five Six
    while (! file.eof())  
    {  // �C��Ū���@��� buffer �}�C 
        file.getline(buffer,sizeof(buffer)); 
        s = strtok(buffer," "); // �H�ťզr���N�r����Ѭ��r�y 
        strcpy(word[count],s);  // �N�Ĥ@�Ӧr�y�x�s��  word[] �}�C 
        count++;
        while(s!= NULL )
        { 
            s = strtok(NULL, " "); // �~����Ѩ�L�r�ꬰ�r�y
    		if (s!= NULL)
    		{
    		   strcpy(word[count],s); // �N��l���r�y�x�s��  word[] �}�C  
    		   count++; 
    		}
        }   
    }
    cout << "�@�� " << count << " �Ӧr�y" << endl;
    for (int i=0;i<count;i++)  // ��ܩҦ����Ѫ��r�y
        cout << word[i] << " " ;
    cout << endl;
    system("pause");
    return 0;
}
