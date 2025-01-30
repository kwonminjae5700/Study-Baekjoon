N, M = map(int, input().split())

p = set()
cnt = 0
result = []

for _ in range(N):
    name = input()

    p.add(name)

for _ in range(M):
    name = input()

    if name in p:
        cnt += 1
        result.append(name)

print(cnt)

for n in sorted(result):
    print(n)
