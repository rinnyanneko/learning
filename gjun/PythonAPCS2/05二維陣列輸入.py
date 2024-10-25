'''
5 4
5 3 8 4
9 7 6 3
5 7 4 3
9 6 1 2
3 5 4 7
'''
m, n = map(int, input().split())
a = []
for j in range(m):
    b = list(map(int, input().split()))
    a.append(b)
print(a)