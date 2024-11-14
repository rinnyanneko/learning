'''
接收一群整數例:
5 4 8 3 6 1 2 7 9 5 4 6 8 7 5 5 1 3 2 4 9 7

再接收多組起始位置與結束位置(序號),例:
2 8
3 9
1 15
4 12
8 20


計算出每組起始位置與結束位置間數字的總和後(含), 再運算所有總和的總和.

輸入說明:
第一列,一個整數代表下一列整數的量,例:
22


第二列,指定數量的整數用空格隔開,例:
5 4 8 3 6 1 2 7 9 5 4 6 8 7 5 5 1 3 2 4 9 7

第三列,一個整數代表接來有幾組起始位置與結束位置,例:
5

第四列~第八列 共5列, 為起始位置與結束位置用空格隔開,例:
2 8
3 9
1 15
4 12
8 20

求第四列至第八列的起始位置與結束位置間數字的總和的總和。

輸出:
一個整數,例:
265


範例輸入:
22
5 4 8 3 6 1 2 7 9 5 4 6 8 7 5 5 1 3 2 4 9 7
5
2 8
3 9
1 15
4 12
8 20

'''
'''
#暴力解
input()
a = list(map(int, input().split()))
s = int(input())
out = 0
for i in range(s):
    start, end = map(int, input().split())
    for j in range(start, end+1):
        out += a[j - 1]
print(out)
'''
#前撮合演算法
N = int(input())
a = list(map(int, input().split()))
b = [0] * N
for i in range(1, N):
    b[i] = a[i] + b[i - 1]
answer = 0
n = int(input())
for i in range(n):
    start, end = map(int, input().split())
    if start != 0:
        answer += b[end] - b[start - 1]
    else:
        answer += b[end]
print(answer)
