'''
第一列一個整數代表接下來有幾列數字
第二列開始的每一列數字有2個整數
第一個整數維係數, 第二個整數為指數
最後一列有一個整數, 代表未知數的值
指數最大值為10

3
7 4
5 2
3 1
5

'''
a = [0] * 11
N = int(input())
for i in range(N):
    x, y = map(int, input().split())
    a[y] = x

p = int(input())

print(a)

answer = 0
for i in range(len(a)):
    answer += a[i] * (p ** i)
print(answer)