#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
void changeStr(char s[]); //�禡�쫬�ŧi 
//�D�禡 
int main()
{
	char str[100]; //�ŧic�ǲΦr�� 
	cout << "�п�J�@��abc..Z�r��G";
	cin >> str;
    changeStr(str);
	cout << "�ഫ�᪺�K�X�r�ꬰ�G" << str << endl;
	system("pause");
	return 0;
}

//�ۭq�禡 
void changeStr(char s[])  // �}�C�ǧ} 
{
    char c;
    for (int i=0; i<strlen(s) ;i++)//strlen()���o�r����ת��禡 
    {
		c = s[i]; 
		printf("%c -> ",c);
        if (c >= 'A' && c <= 'z')
        {
            if (c == 'z')
                c = 'A';
            else if (c == 'Z')
                c = 'a';
            else
            {
				c++;//ascii code+1
            }
        }
        printf("%c\n",c);
        s[i] = c;
    }
}
