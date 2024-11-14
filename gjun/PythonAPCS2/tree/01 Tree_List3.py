#前序(廣先)
'''
8
0 1
0 2
0 3
7 0
1 4
1 5
3 6
'''

def getRoot():
    global x
    for i in x:
        if i[1] == -1:
            return i[0]

def getLeaf():
    global x
    leaf = []
    for i in x:
        if len(i) == 3:
            leaf.append(i[0])
    return leaf


n = int(input())
x = [[0,-1,0] for i in range(n)] #本題的樹


for i in range(n):
    x[i][0] = i
   
for i in range(n-1):    
    a, b = map(int, input().split())
    x[a].append(b)
    x[b][1] = a

print(x)

root = getRoot()
print(root)

# 葉節點的執行旗標設為1
leaf= getLeaf()
for i in leaf:
    x[i][2] = 1
print(leaf)

p = [root]
while len(p) != 0:
    q = p[0]
    if x[q][2] == 1: #旗標為1者, 執行動作並刪除
        print(q)
        p.pop(0)
        continue
    
    #否則設旗標為1, 並反向加入子節點
    x[q][2] = 1 
    for i in range(len(x[q])-1,2,-1):
        p.insert(0,x[q][i])




















