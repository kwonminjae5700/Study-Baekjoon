#include <stdio.h>

int main() {
    int N, M, num[1000000], sum[1000000], A, B;

    scanf("%d", &N);

    for(int i=1;i<=N;i++) scanf("%d", &num[i]);

    scanf("%d", &M);

    sum[1] = num[1];

    for(int i=2;i<=N;i++) {
        sum[i] = sum[i-1] + num[i];
    }

    for(int i=0;i<M;i++) {
        scanf("%d %d", &A, &B);

        if(A==B) printf("%d\n", num[A]);
        else if(A==1) printf("%d\n", sum[B]);
        else {
            printf("%d\n", sum[B]-sum[A-1]);
        }
    }
    


    return 0;
}