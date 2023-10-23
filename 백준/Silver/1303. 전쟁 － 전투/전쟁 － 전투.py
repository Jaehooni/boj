N, M = map(int, input().split())
field = [list(input()) for x in range(M)]
visited = [[0 for j in range(N)] for i in range(M)]
dx = [0, 1, 0, -1]
dy = [1, 0, -1, 0]
wSum = 0
bSum = 0

def judge(x, y):
    if (0 <= x < N and 0 <= y < M):
        return 1

    else:
        return 0

def dfs(x, y, cnt):
    visited[y][x] = 1
    for i in range(4):
        nx = x + dx[i]
        ny = y + dy[i]
        if judge(nx, ny) and field[y][x] == field[ny][nx] and not visited[ny][nx]:
            cnt = dfs(nx, ny, cnt + 1)
    
    return cnt


for i in range(M):
    for j in range(N):
        if not visited[i][j]:
            if field[i][j] == 'W':
                wSum += dfs(j, i, 1) ** 2
                # print("wSum : ",wSum)

            else:
                bSum += dfs(j, i, 1) ** 2
                # print("bSum : ",bSum)

print(wSum, bSum)