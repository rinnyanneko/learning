a = [-1] * 101
l = 0 #最左邊序號
r = 100 #最右邊序號
c = -1 #目前最後一個值的序號

count = 0
start = -1
def display():
    global start
    s = start
    while s != -1:
        print(a[s])
        s = a[s]
def findLast():
    global start
    s = start
    while True:
        if a[s] == -1:
            return s
        s = a[s]

def add(value):
    global count, start
    if count == 0:
        start = value
        count += 1

def findValue(value):
    global start
    s = start
    while s != -1:
        if s == value:
            return s
        s = a[s]
    return -1

def insert(v1, v2):
    i = findValue(v1)
    if i != -1:
        a[v2] = a[v1]
        a[v1] = v2

def remove(value):
    global start, count
    s = start
    while s != -1:
        if a[s] == value:
            a[s] = a[value]
            count -= 1
            return
        s = a[s]