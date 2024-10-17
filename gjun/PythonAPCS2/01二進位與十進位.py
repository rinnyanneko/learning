'''
位元運算
& AND
| OR
^ 互斥
~ NOT

a = 1
b = 2
c = a & b
print(c)
d = a | b
print(d)
e = a ^ b
print(e)
f = ~a
print(f)

<<位元左移
>>位元右移

g = 7
g >>= 1 # g = g >> 1
print(g)
g <<= 1
print(g)
print("-"*50)
h = 1 << 0
print(h)
h = 1 << 1
print(h)
h = 1 << 2
print(h)
h = 1 << 3
print(h)
'''

#指定某一位置為1
a = 0
a |= (1 << 1)
print(a)
a |= (1 << 5)
print(a)
a |= (1 << 3)
print(a)
