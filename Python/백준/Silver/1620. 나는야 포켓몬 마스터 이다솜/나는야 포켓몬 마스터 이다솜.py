N, M = map(int, input().split())

dic = {}

for i in range(N):
    temp = input()
    dic[temp] = str(i+1)
    dic[str(i+1)] = temp

for i in range(M):
    print(dic[input()])