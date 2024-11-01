def power(a, b):
    if b == 1:
        return a
    return a * power(a, b - 1)

def factorial(a):
    if a == 1:
        return a
    return a * factorial(a - 1)

def hcf(a, b):
    if a % b == 0:
        return 0
    return hcf(b, a % b)

def fibonacci(a):
    if a == 0 or a == 1:
        return a
    return fibonacci(a - 2) + fibonacci(a - 1)
def fibonacci2(a):
    f = [0, 1]
    for i in range(2, a):
        f.append(f[a - 2] + f[a - 1])
    return f[a]

#print(power(2, 3))
#print(factorial(5))
#print(hcf(18, 24))
print(fibonacci(50))
#print(fibonacci2(5))
