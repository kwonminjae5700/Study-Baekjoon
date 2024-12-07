#include <stdio.h>

int main() {
    int N;
    long long int dp[81] = {0, 4, 6};

    scanf("%d", &N);

    for(int i=3;i<=N;i++) dp[i] = dp[i-2] + dp[i-1];

    printf("%lld", dp[N]);
 
    return 0;
}