#include <stdio.h>

int main() {
    long long int A, B, N;

    scanf("%lld %lld", &A ,&B);

    N = A-B;

    if(N<0) printf("%lld", N*-1);
    else printf("%lld", N);
    return 0;
}