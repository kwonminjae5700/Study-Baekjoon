#include <stdio.h>

int main(void) {
    int N;

    scanf("%d", &N);

    for(int i=1;i<=N*2-1;i++) {
        if(i<N) {
            for(int j=1;j<=i;j++) {
                printf("*");
            }
        } else if(i>=N) {
            for(int j=i;j<=2*N-1;j++) {
                printf("*");
            }
        }
        printf("\n");
    }
    
    return 0;
}