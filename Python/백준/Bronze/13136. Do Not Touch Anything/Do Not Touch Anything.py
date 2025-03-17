R, C, N = map(int, input().split())

row = R//N
if R % N != 0:
    row += 1

col = C//N
if C % N != 0:
    col += 1

print(row*col)