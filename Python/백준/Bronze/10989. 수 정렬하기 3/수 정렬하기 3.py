import sys
input = sys.stdin.readline
N = int(input())
arr = [0]*10001
for i in range(N):
    idx = int(input())
    arr[idx] += 1
    
for i in range(len(arr)):
    for j in range(arr[i]):
        print(i)