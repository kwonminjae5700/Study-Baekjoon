#include <stdio.h>

int main() {
    int X, dp[1000001] = {0, 0, 1, 1, 2, 3, 2, 3, 3, 2, 3, 4, 3};

    for(int i=13;i<=1000000;i++) {
        dp[i] = dp[i-1]+1;

        if(!(i%2) && (dp[i] > (dp[i/2]+1))) dp[i] = dp[i/2]+1;
        if(!(i%3) && (dp[i] > (dp[i/3]+1))) dp[i] = dp[i/3]+1;
    }

    scanf("%d", &X);

    printf("%d", dp[X]);
    

    return 0;
}