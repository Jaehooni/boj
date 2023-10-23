import sys
sys.setrecursionlimit(10000000)

def dfs(x, y, m, n):
    if 0 <= x < m and 0 <= y < n and (not visited[y][x]) and arr[y][x] == 1:
        visited[y][x] = 1
        dx = [1, 0, -1, 0]
        dy = [0, 1, 0, -1]
        for dx, dy in zip(dx, dy):
            nx = x + dx
            ny = y + dy
            dfs(nx, ny, m, n)

    else:
        return 0

case_num = int(input())
for case in range(case_num):
    bug = 0
    m, n, k = map(int, input().split())
    arr = [[0 for x in range(m)] for x in range(n)]
    visited = [[0 for x in range(m)] for x in range(n)]
    for x, y in [list(map(int, input().split())) for x in range(k)]:
        arr[y][x] = 1

    for y in range(len(arr)):
        for x in range(len(arr[y])):
            if arr[y][x] == 1 and (not visited[y][x]):
                bug += 1
                dfs(x, y, m, n)

    print(bug)
