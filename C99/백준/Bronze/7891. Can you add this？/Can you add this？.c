#include <stdio.h>

int main() {
    long long int N, A, B;

    scanf("%lld", &N);

    for(int i=0;i<N;i++) {
        scanf("%lld %lld", &A, &B);

        printf("%lld\n", A+B);
        
    }

    return 0;
}