n = int(input())
prior = [[ord(x[0]) - 65, ord(x[1]) - 65] for x in input().split()]
cur = [[0 for x in range(3)] for x in range(n+2)]
dest = [[0 for x in range(3)] for x in range(n+2)]

for p in prior:
    if cur[0][p[0]] == 0:
        dest[0][p[0]] = p[1]
        cur[0][p[0]] = 1


for i in range(1,n):
    for j in range(3):
        tmp = dest[i-1][j]
        rec = dest[i-1][tmp]
        num = 3 - j - tmp
        
        if rec == num:
            cur[i][j] = cur[i-1][j] + 1 + cur[i-1][tmp]
            dest[i][j] = num

        else:
            num = 3 - num - rec
            cur[i][j] = (2 * cur[i-1][j]) + 2 + cur[i-1][tmp]
            dest[i][j] = num

print(cur[n-1][0])