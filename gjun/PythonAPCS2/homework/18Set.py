# set 自動剔除重複值的集合
# 新增
a = set()
a.add(8)
a.add(18)
a.add(28)
a.add(18)
a.add(28)
a.add(38)
a.add(18)
a.add(48)
print(a)

b = [1, 4, 1, 3, 2, 4, 1, 5, 4, 1, 2, 3, 4]
b = list(set(b))
print(b)
