a = [
    [1, 2, 3, 4],
    [5, 6, 7, 8],
    [9, 10, 11, 12]
]

for j in a:
    j.append(0)

print(a)

a.append([0] * 5)

print(a)