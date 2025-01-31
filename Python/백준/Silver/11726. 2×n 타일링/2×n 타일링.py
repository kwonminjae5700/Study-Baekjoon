dp = [0, 1, 2, 3, 5]

for i in range(5, 1001):
    dp.append((dp[i-1]+dp[i-2])%10007)

n = int(input())

print(dp[n])

