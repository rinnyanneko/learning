'''
3 4
5 6 7 8
5 6 5 8
6 7 4 9
4 4
200 210 190 200
150 160 140 150
180 185 170 180
240 260 250 240
'''
a, b = map(int, input().split())
p = []
for j in range(a):
    p.append(list(map(int, input().split())))
a, b = map(int, input().split())
q = []
for j in range(a):
    q.append(list(map(int, input().split())))
print(p)
print(q)
r = [[0] * b for i in range(a)]

for k in range(len(p)):
    for j in range(len(q[0])):
        for i in range(len(p[0])):
            r[k][j] += p[k][i] * q[i][j]