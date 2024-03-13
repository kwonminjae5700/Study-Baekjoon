#include <stdio.h>

int main(void) {
    int X, A;

    scanf("%d %d", &X, &A);

    int N[X];

    for(int i=0;i<X;i++) {
        scanf("%d", &N[i]);
    }

    for(int i=0;i<X;i++) {
        if(N[i]<A) {
            printf("%d ", N[i]);
        }
    }
    
    
}