#include <stdio.h>

int main() {
    int N, dp[1000000]={0, 1, 1, 2, 3, 5};

    scanf("%d", &N);

    for(int i=6;i<=N;i++) dp[i] = (dp[i-1]+dp[i-2])%1000000007;

    printf("%d", dp[N]);

    
    return 0;
}