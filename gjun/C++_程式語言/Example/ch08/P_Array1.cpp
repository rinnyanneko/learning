#include <iostream>  // �ޤJ��ƿ�J�B��X�����Y
using namespace std; // �ŧistd �R�W�Ŷ�
int main()
{
	int n[3]={1,2,3};
	cout << "�}�C����\t��     �}\t��\n";
	cout << "-------------------------------------\n";
	for (int i=0;i<3;i++)
		cout << "n[" << i << "]\t\t" << &n[i] << "\t" << n[i] << endl;
	// �H����
	cout << "\n�}�C����\t��     �}\t��\n";
	cout << "-------------------------------------\n";
	for (int i=0;i<3;i++)
		cout << "n+" << i << "\t\t" << n+i << "\t" << *(n+i) << endl;

	system("pause");
	return 0;
}
