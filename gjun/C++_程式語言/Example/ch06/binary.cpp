#include <iostream>
using namespace std;
int main()
{
     int num[]={256,731,943,389,142,645,829,945,371,418};
     string name[]={"�L�p��","������","�����","���j�P","���l��","�G���R","���ŬX","���Ӧh","��Ѩ}","�d���~"}; 
     int n=sizeof(num)/sizeof(num[0]); //�}�C����
     int s,i,j,c,min,max,mid;
     bool Isfound;
     int temint;
     string temstr; 
     for (i=0;i<n-1;i++)  // �}�C�Ƨ�
     {
        for (j=i+1;j<n;j++)
        {
            if (num[i]>num[j])
            {
               temint=num[i];  // �洫�s�� 
               num[i]=num[j];
               num[j]=temint;
               temstr=name[i];  // �洫�m�W 
               name[i]=name[j];
               name[j]=temstr;
             }
        }
     }
     cout << "�Ƨǫ᪺�s���G\n";
     for (i=0;i<n;i++)
     {
         cout << num[i] << " ";
     }
     cout << "\n";
   for(;;)
   {
     Isfound=false;
     min=0;
     max=n-1;
     c=1;
     cout << "�п�J�����̪��s���G";
     cin >> s;
     while (min<=max)
     {
        mid=(min+max)/2;
        if ( num[mid]==s)  //���X�۲� 
        {
           Isfound=true;
           break;
        }
        c++;  //�p���隸�� 
        if (num[mid]>s)  //�p�G�����Ȥj���J�� 
           max=mid-1;    //�ϥθ��p���@�b�ϰ��~���� 
        else             //�p�G�����Ȥ��j���J�� 
           min=mid+1;    //�ϥθ��j���@�b�ϰ��~���� 
     }
     if (Isfound==true)
         cout  << "�����̪��m�W���G" << name[mid];
     else
         cout << "�L���������X�I";
     cout << "�]�@��� " << c << " ���^\n\n";
   }
   return 0;
}
