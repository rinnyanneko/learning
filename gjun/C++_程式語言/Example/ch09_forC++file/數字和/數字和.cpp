#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream file1,file2;// �إ��ɮת��� file1�Bfile2
    bool first=true;    // �O�_���Ĥ@�ռƭ� 
    char ch; // �@�Ӧr��
    int n;   // �C�ժ��ƭ� 
    int r=0; // r �x�s�`�M 
    file1.open("in_a.txt",ios::in);    // file1 ����J 
	file2.open("out_a.txt", ios::out); // file2 ����X 
    while (! file1.eof())
    {
        n=0;  
        do {
            file1.get(ch); // Ū���@�Ӧr��       
            if ( ch>='0' && ch <='9')
            {
                n*=10; // �զ��ƭ� n
                n = n + ch - '0'; // ch - '0' ���ƭȪ��Ӧ��
            }
        } while (ch>='0' && ch <='9'); // Ū��D�Ʀr�h���� 
        if (n!=0)
        {
           r += n;
           if (first) // �p�G�O�Ĥ@�ռƦr 
               first=false;
           else   // �p�G�O�ĤG��(�t)�H�W���Ʀr 
		   {
			   cout << '+';  // �b�Ʀr�e�[ + ��
			   file2 << '+';
		   }
		   cout << n; // ��ܼƦr
		   file2 << n; 
        }
    }
	cout << "=" << r << endl; // ����`�M 
	file2 << "=" << r << endl;
	file1.close();
	file2.close();
    system("pause");
    return 0;
}
