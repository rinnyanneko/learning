a = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9],
    [10, 11, 12],
    [13, 14, 15]
]
b = [[0] * len(a) for i in range(a[0])]

for j in range(len(b)):
    for i in range(len(b[j])):
        b[j][i] = a[len(a) - 1 - i][j]

a = b
print(a)
'''
b[0][0] = a[len(a) - 1 - 0][0]
b[0][0] = a[len(a) - 1 - 1][0]
b[0][0] = a[len(a) - 1 - 2][0]
'''