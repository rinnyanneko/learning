def sortB(x):
    return x[1]
b = ["AB", "AA", "BC", "AE", "CD", "DF", "GC"]
b.sort(key = sortB)
print(b)

def sortC(x):
    return x[0] + x[1]

c = [[5, 4, 2, 3, 4],
     [2, 1, 3, 2, 5],
     [3, 2, 5, 4, 1],
     [4, 6, 3, 2, 1],
     [1, 4, 5, 1, 3]
     ]
c.sort(key=sortC)
print(c)
