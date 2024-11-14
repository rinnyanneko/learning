'''
8
0 1
0 2
0 3
7 0
1 4
1 5
3 6


10
0 4
4 7
4 1
1 6
7 2
2 5
2 3
2 8
5 9
'''
def add(c,p):
    parent[c]= p
    #在children中的父節點list,新增子節點
    children[p].append(c)
    #在children中新增子節點list
    children[c]=[]
    #若父節點原先為葉節點,從葉節點中刪除
    if p in leaf:        
        leaf.remove(p)
    #將子節點新增為葉節點
    leaf.append(c)

    
def delete(c):
    #若是根節點, 全部清空
    if c == root:
        children.clear()
        parent.clear()
        leaf.clear()
        return

    #取出所有刪的節點
    d = [c]
    for i in d:
        for j in children[i]:
            d.append(j)
    #print(d)
            
    #由後往前刪除
    while len(d)>0:
        e = d.pop()
        if e in leaf:
            leaf.remove(e)
        #把children中父節點的list中的子節點編號刪除
        children[parent[e]].remove(e)
        #若此父節點己沒有子節點,加入葉節點
        if len(children[parent[e]]) == 0:
            leaf.append(parent[e])
        children.pop(e)
        parent.pop(e)
        
def getParents(child):
    parents = []
    while child != root:
        child = parent[child]
        parents.insert(0,child) #越上層越前面     
    return parents

def setHeight(leaf, height):
    while len(leaf) > 0:
        c = leaf.pop()
        p = getParents(c)
        
        #由下往上計算, 高度逐層加1
        h = 1
        for i in range(len(p)-1, -1,-1):
            if p[i] in height: #此節點高度己算過
                #目前此葉點算出的高度大於之前葉節點算出的高度, 取代
                #否則不動
                if h > height[p[i]]: 
                    height[p[i]] = h
                else:
                    break
            else:
                height[p[i]] = h
            h += 1


count = int(input())
children = {} #節點編號為key, 子節點群為value(list)
parent = {} #節點編號為key, 父節點為value
leaf=[] 
root = -1

#設定節點初值
for i in range(count):
    children[i] = []    
    parent[i] = -1
    leaf.append(i) #先將所有節點設為葉節點
    
#設定節點關係
for i in range(count - 1):
    z = list(map(int,input().split()))
    children[z[0]].append(z[1])
    parent[z[1]] = z[0]
    if z[0] in leaf :
        leaf.remove(z[0]) #有子節點者刪除

#尋找根節點        
for i in parent:    
    if parent[i] == -1: #沒有父節點者其值為-1
        root = i
        break

#設定高度
height = {}
setHeight(leaf,height)


print(children)
print(parent)
print(leaf)
print(root)
add(18,2)
add(19,5)
delete(1)
print(children)
print(parent)
print(leaf)
for i in children:
    print(i,":",getParents(i))
print(height)


