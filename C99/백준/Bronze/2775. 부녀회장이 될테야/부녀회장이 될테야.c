#include <stdio.h>

int main() {
    int T, k, n;
    int dp[15][15] = {0};

    for(int i=0;i<15;i++) {
        for(int j=1;j<15;j++) {
            if(!i) dp[i][j] = j;
            else if(j == 1) dp[i][j] = 1;
            else dp[i][j] = dp[i-1][j]+dp[i][j-1];
        }
    }

    scanf("%d", &T);

    for(int i=0;i<T;i++) {
        scanf("%d\n%d", &k, &n);

        printf("%d\n", dp[k][n]);
    }


    return 0;
}