#include <stdio.h>

int main() {
    int N;
    long long dp[118]={0, 1, 1, 1, 2, 3, 4, 6};

    scanf("%d", &N);

    for(int i=8;i<=N;i++) dp[i] = dp[i-1] + dp[i-3];
        
    printf("%lld", dp[N]);

    return 0;
}