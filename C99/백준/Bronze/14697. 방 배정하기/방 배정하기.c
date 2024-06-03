#include <stdio.h>

int main() {
    int A, B, C, N, result=0;

    scanf("%d %d %d %d", &A, &B, &C, &N);

    for(int i = 0;i<(N/A)+1;i++){
        for(int j = 0;j<(N/B)+1;j++){
            for(int l = 0;l<(N/C)+1;l++){
                if((i*A + j*B + l*C)==N) result=1;
            }
        }
    }

    printf("%d", result);

    return 0;
}