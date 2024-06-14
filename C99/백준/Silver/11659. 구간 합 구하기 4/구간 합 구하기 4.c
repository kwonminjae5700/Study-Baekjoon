#include <stdio.h>

int main() {
    int N, M, num[1000000], sum[1000000]={0}, i, j;

    scanf("%d %d", &N, &M);

    for(int l=1;l<=N;l++) scanf("%d", &num[l]);

    sum[1] = num[1];

    for(int l=2;l<=N;l++) {
        sum[l] = sum[l-1] + num[l];
    }

    for(int l=0;l<M;l++) {
        scanf("%d %d", &i, &j);

        if(i==1) printf("%d\n", sum[j]);
        else if(i==j) printf("%d\n", num[i]);
        else {
            printf("%d\n", sum[j]-sum[i-1]);
        }
    }

    
    

    return 0;
}