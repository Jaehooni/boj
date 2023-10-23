input()
N = sorted(list(map(int, input().split())))
input()
M = list(map(int, input().split()))
find = False
for m in M:
    find = False
    start = 0
    end = len(N)-1
    while start <= end:
        mid = int((start + end) / 2)
        if N[mid] > m:
            end = mid - 1

        elif N[mid] < m:
            start = mid + 1

        else:
            find = True
            break

    if find:
        print(1)

    else:
        print(0)
    