N, M = map(int, input().split())

dict = {}

for _ in range(N):
    url, pw = input().split()

    dict[url] = pw

for _ in range(M):
    find = input()

    print(dict[find])