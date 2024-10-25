'''
5 5
1 2 3 4 5
9 6 5 4 7
8 6 5 3 2
6 2 1 4 5
9 6 3 2 1
9 5 4 6 8
8 6 4 7 5
5 3 2 4 6
9 6 7 4 8
5 3 6 9 7


'''
m, n = map(int, (input().split()))
a = []
b = []
c = [[0] * n for i in range(m)]

for i in range(m):
    a.append(list(map(int, (input().split()))))
for i in range(m):
    b.append(list(map(int, (input().split()))))
print(a)
print(b)
print(c)

for j in range(m):
    for i in range(n):
        c[j][i] = a[j][i] + b[j][i]

for j in range(m):
    for i in range(n - 1):
        print(c[j][i], end=' ')
    print(c[j][-1])