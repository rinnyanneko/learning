#include <iostream>
using namespace std;
int main()
{
   for(;;)
   {
     int num[]={256,731,943,389,142,645,829,945,371,418};
     string name[]={"�L�p��","������","�����","���j�P","���l��","�G���R","���ŬX","���Ӧh","��Ѩ}","�d���~"}; 
     int n=sizeof(num)/sizeof(num[0]); //�}�C����
     int s,i;
     bool Isfound=false;
     cout << "�п�J�����̪��s���G";
     cin >> s;
     for (i=0;i<n;i++)  //�v�@���j�M 
     {
         if ( num[i]==s)  //���X�۲� 
         {
            Isfound=true;
            break;
         }
     }
     if (Isfound==true)
         cout  << "�����̪��m�W���G" << name[i];
     else
         cout << "�L���������X�I";
     cout << "�]�@��� " << i+1 << " ���^\n\n";
   }
   return 0;
}
