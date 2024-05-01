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
    int A[2], B[2];
    
    for(int i=0;i<2;i++) {
        scanf("%d %d", &A[i], &B[i]);
    }
    
    int mother = B[0]*B[1];
    int son = B[0]*A[1] + B[1]*A[0];
    
    int r = GCD(mother, son);
    
    printf("%d %d", son/r, mother/r);
    
    
    return 0;
}