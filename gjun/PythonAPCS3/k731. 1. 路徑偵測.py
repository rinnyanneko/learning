a, b = 0, 0
left, right, u = 0, 0, 0
heading = 0 # 0: up, 1: right, 2: down, 3: left
n = input()
for i in range(int(n)):
    x, y = map(int, input().split())
    match heading:
        case 0:
            if y > b:
                b = y
            elif y < b:
                b = y
                u += 1
                heading = 2
            elif x < a:
                left += 1
                heading = 3
                x = a
            elif x > a:
                right += 1
                heading = 1
                x = a
            break
        case 1:
            if y > b:
                b = y
                heading = 0
                left += 1
            elif y < b:
                b = y
                right += 1
                heading = 2
            elif x < a:
                u += 1
                heading = 3
                x = a
            elif x > a:
                x = a
                heading = 1
            break
        case 2:
            if y > b:
                b = y
                u += 1
                heading = 0
            elif y < b:
                b = y
                heading = 2
                right += 1
            elif x < a:
                x = a
                heading = 3
            elif x > a:
                x = a
                heading = 1
            break
        case 3:
