#include <iostream>
#include "time.h"
using namespace std;
int main()
{
	unsigned int seed=(unsigned int)time(NULL);
	srand(seed);

	int n[50];  // �إ� n[50] ���}�C�A���Ҥ� n[0] �å��ϥ�
	// �]�w n[] ��Ȭ� n[1]=1,n[2]=2,...,n[48]=48,n[49]=49
	for (int i = 1; i <= 49; i++)
		n[i] = i;  // 1,2,3 ...48, 49 

	// �۰}�C�����X���N�@�ӼƩM�� n[i] ����
	// �N�y�s���~�P�A�N�O�۲Ĥ@�i�P�}�l�A�̧Ǧb�P�襤�A���N��X�@�i�P�M�o�i�P�����A�o�˸g�L�@����
	// �N�|�N�P�~��
	for (int i = 1; i <= 49; i++)
	{
		int tmp = 1 + rand() % 49; // ���� 1 ~ 49 �����
		int x = n[i];
		int y = n[tmp];
		n[i] = y;
		n[tmp] = x;
	}

	cout <<"�����j�ֳz���}�����X�G";
	for (int i = 1; i <= 6; i++) // ���X�̤W�����C�i�P
	{
		cout <<  n[i] << " ";
	}
	cout <<"\n�����j�ֳz���S�O���G";
		cout <<  n[7] << " ";
		
	cout <<  endl;
	system("pause");
	return 0;
}
