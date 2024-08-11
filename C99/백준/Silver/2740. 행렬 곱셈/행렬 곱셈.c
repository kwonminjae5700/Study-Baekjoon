#include <stdio.h>

int main() {
    int N, M, K, num, sum=0;

    scanf("%d %d", &N, &M);

    int A[N][M];

    for(int i=0;i<N;i++) {
        for(int j=0;j<M;j++) {
            scanf("%d", &A[i][j]);
        }
    }

    scanf("%d %d", &M, &K);

    int B[M][K];

    for(int i=0;i<M;i++) {
        for(int j=0;j<K;j++) {
            scanf("%d", &B[i][j]);
        }
    }

    for(int i=0;i<N;i++,puts("")) {
        for(int j=0;j<K;j++) {
            sum = 0;
            
            for(int l=0;l<M;l++) {
                sum += A[i][l] * B[l][j];
            }

            printf("%d ", sum);
        }
    }
    
    return 0;
}