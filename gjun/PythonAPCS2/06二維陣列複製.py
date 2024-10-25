a = [
    [1, 2, 3, 4]
    [5, 6, 7, 8]
    [9, 10, 11, 12]
]

b = [[0] * 4 for i in range(3)]
for i in range(3):
    for j in range(4):
        b[i][j] = a[i][j]
print(b)