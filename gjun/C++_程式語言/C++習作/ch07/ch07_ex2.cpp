#include <iostream>
#include "time.h"
using namespace std;
int main()
{
	unsigned int seed=(unsigned int)time(NULL);
	srand(seed);

	int n[50];  // 建立 n[50] 的陣列，本例中 n[0] 並未使用
	// 設定 n[] 初值為 n[1]=1,n[2]=2,...,n[48]=48,n[49]=49
	for (int i = 1; i <= 49; i++)
		n[i] = i;  // 1,2,3 ...48, 49 

	// 自陣列中取出任意一個數和第 n[i] 互換
	// 術語叫做洗牌，就是自第一張牌開始，依序在牌堆中，任意抽出一張牌和這張牌互換，這樣經過一輪後
	// 就會將牌洗亂
	for (int i = 1; i <= 49; i++)
	{
		int tmp = 1 + rand() % 49; // 產生 1 ~ 49 的整數
		int x = n[i];
		int y = n[tmp];
		n[i] = y;
		n[tmp] = x;
	}

	cout <<"本期大樂透的開獎號碼：";
	for (int i = 1; i <= 6; i++) // 取出最上面的七張牌
	{
		cout <<  n[i] << " ";
	}
	cout <<"\n本期大樂透的特別號：";
		cout <<  n[7] << " ";
		
	cout <<  endl;
	system("pause");
	return 0;
}
