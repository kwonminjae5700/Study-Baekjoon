N = int(input())

arr = []

for i in range(N):
    x = list(map(int, input().split()))
    arr.append(x)

arr.sort(key = lambda x : (x[1], x[0]))

for x in arr:
    print(x[0],x[1])