// ���ҥt�ϥ� string ���O�]�p�p�U
// C++ �� string ���O���䴩����A��ĳ�H string ���N char[] �}�C  
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
//�ŧi�ۭq�禡 
string changeStr(string);
//�D�禡 
int main()
{
	string str, newStr; //c++�i��string���O�ŧi�r�ꪫ�� 
	cout << "�п�J�@��a-Z�r��G";
	cin >> str;
	newStr = changeStr(str);
	cout << "�ഫ�᪺�K�X�r�ꬰ�G" << newStr << endl;
	system("pause");
	return 0;
}

//�ۭq�禡 
string changeStr(string s)
{
    char c;
    string newStr = ""; //�Ŧr��
    //length ���o�r����ת���kmethod
    for (int i=0; i<s.length() ;i++) 
    {		
		c = s.at(i);//���o�r�ꤤ�Y�Ӧr������kmethod 
		//c = s[i];
		printf("%c -> ",c);
        if (c >= 'A' && c <= 'z')
        {
            if (c == 'z')
                c = 'A';
            else if (c == 'Z')
                c = 'a';
            else
            {
				c++; //�r�� ascii code + 1  
            }
        }
        printf("%c\n",c);
        newStr += c;
        //s[i]=c;
    }
    return newStr;
}
