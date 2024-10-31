a = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9],
    [10, 11, 12],
    [13, 14, 15]
]
'''指派
b = [[0] * 3 for i in range(5)]

for j in range(len(b)):
    for i in range(len(b[0])):
        b[j][i] = a[len(a) - 1 - j][i]

a = b
print(a)
'''

for i in range(len(a // 2)):
    a[i], a[len(a) - 1 - i] = a[len(a) - 1 - i], a[i]