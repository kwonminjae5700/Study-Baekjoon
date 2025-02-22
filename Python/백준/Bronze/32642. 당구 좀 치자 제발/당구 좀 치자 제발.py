N = int(input())
weather = list(map(int, input().split()))
anger = [0] * N  # 각 날 마다의 분노 리스트
status = 0  # 동우의 현재 분노 0

for i in range(N):
    if weather[i] == 1:
        status += 1
    elif weather[i] == 0:
        status -= 1

    anger[i] = status

print(sum(anger))