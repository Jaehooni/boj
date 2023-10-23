from math import sqrt

S = int(input())
N = 0
for i in range(1, 100000):
    N += i
    if (N == S):
        print(i)
        break

    elif (N > S):
        print(i-1)
        break