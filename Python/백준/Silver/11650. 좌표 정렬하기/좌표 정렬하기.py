N = int(input())

arr = []

for i in range(N):
    x = list(map(int, input().split()))
    arr.append(x)

arr.sort()

for x in arr:
    print(x[0],x[1])