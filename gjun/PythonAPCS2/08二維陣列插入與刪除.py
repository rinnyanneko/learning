a = [
    [1, 2, 3, 4],
    [5, 6, 7, 8],
    [9, 10, 11, 12]
]
for j in a:
    j.insert(2,0)
print(a)

a.insert(2, [0] * 4)
print(a)

a.pop(2)
print(a)

for j in a:
    j.pop(2)
print(a)