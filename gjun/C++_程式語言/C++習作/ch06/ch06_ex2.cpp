#include <iostream>
using namespace std;
int main()
{
	char s[3][100];
	int sizeTotal=sizeof(s);
	int sizeRow=sizeof(s[0]);
	int n=sizeTotal/sizeRow; //�}�C�����Ӽ� 
	for (int i=0 ;i<n; i++) 
	{
		cout << "�п�J�� " << i+1 << "�ӥy�l�G";
		gets(s[i]);
	}
	int c=0;  //�p��r���ơA�}�l���k�s 
	for (int i=0 ;i<n; i++)  //�~�h�j��G�y�l�� 
		for (int j = 0; j < sizeRow; j++)  //���h�j��G�r��  
			if (s[i][j]=='\0')  //�p�G�O�����r���N���}�j�� 
				break;
			else                //�p�G���O�����r���N�N�r�ƥ[1 
				c++;
	cout << "�`�@��J " << c << " �Ӧr��\n";
    system("pause");
    return 0;
}
