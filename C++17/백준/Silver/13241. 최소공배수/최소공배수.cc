#include <stdio.h>

long long int LCM(int n1, int n2) {
    int result;
    
    while(n1%n2!=0) {
        result=n1%n2;
        n1=n2;
        n2=result;
    }
    
    return n2;
}

int main() {
    long long int A, B;
    
    scanf("%lld %lld", &A, &B);
    
    printf("%lld", A*B/LCM(A, B));
    
    return 0;
}