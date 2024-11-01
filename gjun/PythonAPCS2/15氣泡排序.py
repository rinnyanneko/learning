a = [5, 4, 3, 6, 8, 7, 1, 2]

for j in range(len(a) - 1):
    for i in range(len(a) - 1):
        if a[i] > a[i + 1]:
            a[i], a[i + 1] = a[i + 1], a[i]
print(a)
b = ["AB", "AA", "BC", "AE", "CD", "DF", "GC"]
for j in range(len(b) - 1):
    for i in range(len(b) - 1):
        if b[i][0] > b[i + 1][0]:
            b[i], b[i + 1] = b[i + 1], b[i]
print(b)
c = [[5, 4, 2, 3, 4],
     [2, 1, 3, 2, 5],
     [3, 2, 5, 4, 1],
     [4, 6, 3, 2, 1],
     [1, 4, 5, 1, 3]
     ]
for j in range(len(c) - 1):
    for i in range(len(c) - 1):
        if c[i][0] > c[i + 1][0]:
            c[i], b[i + 1] = c[i + 1], c[i]
print(c)
