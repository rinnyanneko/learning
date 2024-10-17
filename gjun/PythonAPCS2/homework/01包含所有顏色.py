'''
第一行一個數字, 假設為N, 代表N個顏色, 代號0~N-1
第二行一個數字, 假設為M, 代表接下來有幾列數字, 每一列數字均是由0~N-1組成

輸出:有幾列數字包含所有顏色代號

範例輸入:
    3
    5
    012
    210
    322
    100
    122
範例輸出:
    2
'''
color = input()
row = input()
count = 0
for i in color:
    countA = 0
    num = input()
    for j in color:
        if str(j) in num: countA += 1
    if countA == color:
        count += 1
print(count)
