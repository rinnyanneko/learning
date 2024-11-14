'''
      2
   1     4
   3     7
  5 6   8  9
'''
#0 代表沒有父節點或子節點
tree = {1:(2, 3), 2:(0, 1, 4), 3:(1, 5, 6), 4:(2, 7), 5:(3, 0), 6:(3, 0), 7:(4, 8, 9), 8:(7, 0), 9:(7, 0)}

root = -1;
def findRoot():
    for i in tree:
        if tree[i][0] == 0:
            root = i
            return root

def displayTree(root): #廣先搜尋
    nudes = [root]
    for nude in nudes:
        print(nude,sep=" ")
        if tree[nude][1] != 0:
            for i in range(1, len(tree[nude])):
                nudes.append(tree[nude][i])


def displayTree2(nude): #深先搜尋
    print(nude)
    if tree[nude][1] != 0:
        for i in range(1,len(tree[nude])):
            displayTree2(tree[nude][i])

displayTree(findRoot())
print("-----------------")
displayTree2(findRoot())
