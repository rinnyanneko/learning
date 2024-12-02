F = int(input())
N = int(input())
y = [-1] + [int(x) for x in input().split()]
wins = (-2, -3, 5)
loses = (2, 3, -5)
for i in range(1, N + 1):
    print(F, end = " ")
    r = F-y[i]
    if r in wins:
        print(": Won at round %d" % i)
    elif r in loses:
        print(": Lost at round %d" % i)
        break
    else:
        if (y[i] == y[i - 1]):
            if y[i + 1] == 0:
                F = 5
            elif y[i + 1] == 2:
                F = 0
            else:
                F = 2
else:
    print(": Drew at round %d" %i)