a = {10:"Sunday", 12:"Monday", 21:"Tuesday"}
print(a[10])
b = dict()
b["A"] = 78
b["B"] = 65
b["C"] = 84
print(b)

c = dict()
c[78] = "A"
c[65] = "B"
c[84] = "C"
c[84] = "D"
print(c)
print(c[65])

del c[65]
print(c)

for i in c:
    print(i, "=", c[i])

print(list(a.keys()))
print(list(a.values()))

for i in a.values():
    print(i)

x = dict()
x["A"] = [-1] * 4
x["b"] = [-1] * 4
print(x)
