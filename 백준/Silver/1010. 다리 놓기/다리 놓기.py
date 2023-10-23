fact_list = [0] * 30
fact_list[0] = 1
fact_list[1] = 1

def factorial(n):
    if (n < 0):
        return -1
    if fact_list[n]:
        return fact_list[n]
    else:
        return n * factorial(n-1)

def comb(n,r):
    return factorial(n) / (factorial(n-r) * factorial(r))
    
num = int(input())
for i in range(num):
    a, b = map(int, input().split())
    a, b = max(a, b), min(a, b)
    print(int(comb(a,b)))
    