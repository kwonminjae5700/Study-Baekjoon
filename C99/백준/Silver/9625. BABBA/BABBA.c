#include <stdio.h>

int dp[46][2]={1, 0, 0, 1};

int main() {
    int K;

    scanf("%d", &K);

    for(int i=2;i<=K;i++) {
        dp[i][0] = dp[i-2][0] + dp[i-1][0];
        dp[i][1] = dp[i-2][1] + dp[i-1][1];
    }

    printf("%d %d", dp[K][0], dp[K][1]);

    return 0;
}