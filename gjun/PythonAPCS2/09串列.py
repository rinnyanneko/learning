'''
學生編號 0~9, 假設0號同學排第一個, 1號同學是最後一個
9
0 5
7 2
2 1
9 6
5 4
4 9
3 7
6 8
8 3
'''
N = int(input())
a = [-1] * 10
for i in range(N):
    x, y = map(int, input().split())
    a[x] = y

# print(a)
i = 0
while True:
    print(a[i], end=' ')
    i = a[i]
    if i == -1:
        break

i = 0
c = 0
while c < 4:
    i = a[i]
    c += 1
print(i)