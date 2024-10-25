a = [
    [1, 2, 3, 4, 5],
    [6, 7, 8, 9, 10],
    [11, 12, 13, 14, 15]
]

print(a)

print(a[1])

print(a[2][2])

for j in range(len(a)):
    for i in range(len(a[j])):
        print(a[j][i], end = " ")
    print()

print("*" * 50)

for j in a:
    for i in j:
        print(i, end = " ")
    print()

print("*" * 50)

for j in range(len(a)):
    for i in range(len(a[j]) - 1):
        print(a[j][i], end = " ")
    print(a[j][-1])