#include <stdio.h>

int main() {
    int N, K, dp[31][31]={0};

    scanf("%d %d", &N, &K);

    for(int i=1;i<=N;i++) {
        for(int j=1;j<=N;j++) {
            if(i==1 || j==1) dp[i][j] = 1;
            else dp[i][j] = dp[i-1][j]+dp[i][j-1];
        }
    }

    printf("%d", dp[N-K+1][K]);

    return 0;
}