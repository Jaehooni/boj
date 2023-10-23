from collections import deque
import sys
input = sys.stdin.readline
data = input().rstrip()
L = deque(list(data))
R = deque()
M = int(input())

for x in range(M):
    command = input().split()
    if command[0] == 'P':
        L.append(command[1])

    elif command[0] == 'L':
        if L:
            R.appendleft(L.pop())

    elif command[0] == 'D':
        if R:
            L.append(R.popleft())

    else:
        if L:
            L.pop()

print(''.join(list(L) + list(R)))