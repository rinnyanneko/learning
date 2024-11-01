def p1(i):
    if i > 3:
        return
    print("Hello")
    p1(i+1)

'''
i = 1
while True:
    if i > 3:
        break
    print("Hello")
    i +=1
'''
def p2(i):
    print("Hello")
    if i <= 3:
        p2(i + 1)
def p3(i):
    print("Hello")
    if i < 3:
        p3(i + 1)
    print("Hi")
def p4(i):
    print(i)
    if i < 3:
        p4(i + 1)
        print(i)
def p5(i, j):
    print(i)
    if i == j:
        return
    p5(i + 1, j)
    print(j)
def p6(i, j):
    if i == j:
        return
    print(i)
    if i % 2 == 1:
        p7(i + 1, j)
def p7(i, j):
    if i == j:
        return
    print(i)
    if i % 2 == 0:
        p6(i + 1, j)
#p1(1)
#p2(1)
#p3(1)
#p4(1)
#p5(1, 3)
p6(1, 5)
