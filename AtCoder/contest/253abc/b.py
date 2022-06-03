H, W = map(int, input().split())
S = [input() for i in range(H)]
#P = []
#for y in range(H):
#    for x in range(W):
#        if S[y][x] == 'o':
#            P.append((y, x))
#ay, ax = P[0]
#by, bx = P[1]
#print(abs(ax - bx) + abs(ay - by))

row, col = 0, 0
for y in range(H):
    for x in range(W):
        if S[y][x] == 'o':
            row = abs(row - x)
            col = abs(col - y)
print(row + col)
