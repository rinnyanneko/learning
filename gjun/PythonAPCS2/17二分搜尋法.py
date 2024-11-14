'''
a = [11, 22, 33, 44, 55, 66, 77, 88, 99]
s = 88

l = 0
r = len(a) - 1

while l <= r:
    m = (l + r) //2
    if a[m] == s:
        print("Found it!")
        break
    elif a[m] > s:
        r = m - 1
    else:
        l = m + 1
'''
def binarySearch(array, value):
    l = 0
    r = len(array) - 1
    while l <= r:
        m = (l + r) // 2
        if array[m] == value:
            return m
        elif a[m] > value:
            r = m - 1
        else:
            l = m + 1
    return -1

a = [11, 22, 33, 44, 55, 66, 77, 88, 99]
s = 88

print(binarySearch(a, 11))
print(binarySearch(a, 66))
print(binarySearch(a, 88))
print(binarySearch(a, 8))
print(binarySearch(a, 100))
