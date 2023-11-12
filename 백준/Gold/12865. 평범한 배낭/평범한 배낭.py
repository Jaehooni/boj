N, K = map(int, input().split())
N_list = [[0,0]]
d = [[0] * (K + 1) for _ in range(N + 1)]
for i in range(N):
    N_list.append(list(map(int, input().split())))

for i in range(1, N+1):
    w = N_list[i][0]
    v = N_list[i][1]
    for j in range(1, K+1):
        if j < w:
            d[i][j] = d[i-1][j]

        else:
            d[i][j] = max(d[i-1][j], d[i-1][j-w] + v)

print(d[N][K])