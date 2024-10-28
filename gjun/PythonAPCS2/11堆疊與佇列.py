#Stack堆疊
a = []
a.append([0, 0, 1])
a.append([1, 0, 1])
a.append([1, 1, 1])
print(a.pop())
a.append([1, 1, 2])
a.append([2, 1, 1])
print(a)

while len(a) != 0:
    print(a.pop())
print("--------------")
#Queue佇列
a = []
a.append(5)
a.append(15)
a.append(25)
print(a.pop(0))
a.append(35)
a.append(45)
print(a)
while len(a) != 0:
    print(a.pop(0))

#a.insert(0, 55)