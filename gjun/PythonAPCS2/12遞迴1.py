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
#p1(1)
#p2(1)
p3(1)
