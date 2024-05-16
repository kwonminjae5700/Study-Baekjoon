#include <stdio.h>

int GCD(int n1, int n2) {
    int result;
    
    while(n1%n2!=0) {
        result = n1%n2;
        n1=n2;
        n2=result;
    }
    
    return n2;
}

int main() {
    int T, A, B;
    
    scanf("%d", &T);
    
    for(int i=0;i<T;i++) {
        scanf("%d %d", &A, &B);
        
        printf("%d\n", A*B/GCD(A, B));
    }
    
    return 0;
}