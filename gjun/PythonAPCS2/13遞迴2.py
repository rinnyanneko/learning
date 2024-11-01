def a1(i):
    if i == 1:
        return i
    return a1(i - 1) + i
def a2(i):
    if i != 1:
        return a2(i - 1) + i
    return i

#print(a1(5))
print(a2(5))
