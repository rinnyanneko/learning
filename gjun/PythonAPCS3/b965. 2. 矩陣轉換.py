R, C, M = map(int, input().split())
matrix = [C][M]
for i in range(R):
    for j in range(C):
        matrix[i][j] = int(input())
operate = list(map(int, input().split()))

def rotate(matrix):
    return list(zip(*matrix[::-1]))

def flip(matrix):
    return matrix[::-1]