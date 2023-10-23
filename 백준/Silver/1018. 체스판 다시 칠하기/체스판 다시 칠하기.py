N, M = map(int, input().split())
chess_board = [list(input()) for x in range(N)]
import math

min_val = N * M + 1

def check(col, row):
    value = chess_board[row][col]
    num = 0

    if col + 8 > M or row + 8 > N:
        return math.inf
        

    else:
        for i in range(col, col + 8):
            for j in range(row, row + 8):
                diff = i + j - col - row
                if (diff % 2 == 0):
                    if (value != chess_board[j][i]):
                        num += 1

                else:
                    if (value == chess_board[j][i]):
                        num += 1

        return num

def check_with_paint(col, row):
    value = chess_board[row][col]
    if value == 'W':
        value = 'B'

    else:
        value = 'W'

    num = 0

    if col + 8 > M or row + 8 > N:
        return math.inf
        

    else:
        for i in range(col, col + 8):
            for j in range(row, row + 8):
                diff = i + j - col - row
                if (diff % 2 == 0):
                    if (value != chess_board[j][i]):
                        num += 1

                else:
                    if (value == chess_board[j][i]):
                        num += 1

        return num


for i in range(0, M):
    for j in range(0, N):
        min_val = min(min_val, check(i, j))
        min_val = min(min_val, check_with_paint(i, j))
        
print(min_val)