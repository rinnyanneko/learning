#include <iostream>  
using namespace std; 
int main()
{
	char a[12];  // c�ǲΦr�� a
	char b[12];  // c�r�� b
	char c[24];  // c�r�� c
	char buffer[10];
    int r;  // ��ƩM 
	cout << "�п�J�ƭȦr�� a�G" ;
    cin >> a;
    cout << "�п�J�ƭȦr�� b�G" ;
    cin >> b;
    // �r��ۥ[ 
    strcpy(c,a);  // �r��ƻs c=a
    strcat(c,b);  // �r��ۥ[ c=c+b �ҥH c=a+b 
    cout << "�r�� a+b =" << c << endl;
    // ��ƩM 
    r=atoi(a)+atoi(b);
    cout << "�ƭȩM=" << r << endl;
    // �N�ƭ�(��ƩM ) r �ର�r���s�b buffer[] �}�C 
    itoa(r,buffer,10); // itoa() �N����ഫ���r�� 
    cout << "buffer=" << buffer <<endl;
    cout << "buffer �}�C������=" << strlen(buffer) << endl; // buffer �}�C������
 
	system("pause");
	return 0;
}
