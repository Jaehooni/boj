n = int(input())
A = [list(map(int, input().split())) for x in range(n)]
m = int(input())
B = [list(map(int, input().split())) for x in range(m)]
diff = []

for i in range(n):
    for j in range(m):
        diff.append((A[i][0] + B[j][0] - 2) * 10 + 1)
        diff.append((A[i][0] + B[j][1] - 1) * 10 -1)
        diff.append((A[i][1] + B[j][0] - 1) * 10 -1)
        diff.append((A[i][1] + B[j][1]) * 10 + 1)


diff.sort()

d, cur_val, cur_pos, max_val, max_pos = 0, 0, 0, 0, 0
for dif in diff:
    if dif % 10 == 1:
        first, second = dif // 10, dif % 10
    else: 
        first, second = dif // 10 + 1, -1

    cur_val += d * (first - cur_pos)
    cur_pos, d = first, d + second

    if max_val < cur_val:
        max_val, max_pos = cur_val, cur_pos


print(max_pos)