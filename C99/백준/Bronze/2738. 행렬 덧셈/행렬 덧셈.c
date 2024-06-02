#include <stdio.h>

int main() {
    int N, M, arr[201][201];

    scanf("%d %d", &N, &M);

    for(int i=0;i<N*2;i++) {
        for(int j=0;j<M;j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i=0;i<N;i++,puts("")) {
        for(int j=0;j<M;j++) {
            printf("%d ", arr[i][j] + arr[i+N][j]);
        }
    }

    

    return 0;
}