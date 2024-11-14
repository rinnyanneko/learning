#前序(深先)
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
        if len(i) == 2:
            leaf.append(i[0])
    return leaf


n = int(input())
x = [[0,-1] for i in range(n)] #本題的樹


for i in range(n):
    x[i][0] = i
   
for i in range(n-1):    
    a, b = map(int, input().split())
    x[a].append(b)
    x[b][1] = a

print(x)

root = getRoot()
print(root)
leaf= getLeaf()
print(leaf)


p = [root]
while len(p) != 0:
    q = p.pop(0)
    print(q) #先執行
    #再將子節點反向加入集合
    for i in range(len(x[q])-1,1,-1):
        p.insert(0,x[q][i])




















