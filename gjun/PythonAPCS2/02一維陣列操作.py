a = [1, 2, 4, 5]

# 新增值
b = [0] * (len(a) + 1)
for i in range(len(a)):
    b[i] = a[i]
b[len(a)] = 6
a = b
print(a)

# 插入值
index = 2
v = 3
b = [0] * (len(a) + 1)
for i in range(index):
    b[i] = a[i]
for i in range(index, len(a)):
    b[i + 1] = a[i]
    b[index] = v
a = b
print(a)

# 刪除值
index = 3
b = [0] * (len(a) - 1)
for i in range(index):
    b[i] = a[i]
for i in range(index, len(b)):
    b[i] = a[i + 1]
print(a) 