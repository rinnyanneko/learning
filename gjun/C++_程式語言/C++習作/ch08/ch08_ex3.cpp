#include "iostream"
using namespace std;
int main()
{
	int n;
	cout << "�п�J�}�C����=";
	cin >> n;
	int *value = new int[n];   // �ŧi�}�C���׬� n 
	for (int i=0;i<n;i++)
	{
		cout << "�п�J��" << i << " �ռƦr:";
		cin >> *(value+i);
	}
	int sum=0;
	for (int i=0;i<n;i++)
		sum += *(value+i);
	cout << "�`�M=" << sum << endl;

	delete[] value;  // ����ʺA�}�C�t�m���O����Ŷ�
	system("pause");
	return 0;
}
