#include <stdio.h>

int main() {
    int A, B, C, N, result=0;

    scanf("%d %d %d %d", &A, &B, &C, &N);

    N%=C;
    N%=B;
    N%=A;

    if(N==0) result=1;

    printf("%d", result);

    return 0;
}