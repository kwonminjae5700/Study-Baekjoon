#include <stdio.h>

int main(void) {
    int X, N, a, b, sum=0;

    scanf("%d", &X);
    scanf("%d", &N);

    for(int i=0;i<N;i++) {
        scanf("%d %d", &a, &b);
        sum = sum + a*b;
    }

    if(X==sum)
        printf("Yes");
    else if(X!=sum)
        printf("No");
}