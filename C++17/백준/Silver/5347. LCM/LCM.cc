#include <stdio.h>

long long int GCD(int n1, int n2) {
    int result;
    
    while(n1%n2!=0) {
        result=n1%n2;
        n1=n2;
        n2=result;
    }
    
    return n2;
}

int main() {
    long long int A, B, N;
    
    scanf("%lld", &N);
    
    for(int i=0;i<N;i++) {
        scanf("%lld %lld", &A, &B);
    
        printf("%lld\n", A*B/GCD(A, B));
    }
    
    return 0;
}