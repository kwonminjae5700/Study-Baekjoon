#include <stdio.h>

int main() {
    int R, C, W;
    unsigned long long int dp[31][31], sum=0;

    scanf("%d %d %d", &R, &C, &W);

    for(int i=1;i<=30;i++) {
        for(int j=1;j<=30;j++) {
            if(i==1 || j==1) dp[i][j] = 1;
            else dp[i][j] = dp[i-1][j] + dp[i][j-1]; 
        }
    }

    int point = R-C+1, last;
    if(C==1) last = W;
    else last = C+W-1;
    for(int i=point;i<=point+W-1;i++) {
        for(int j=C;j<=last;j++) sum += dp[i][j];

        last--;
        
    }

    printf("%llu", sum);
    

    return 0;
}