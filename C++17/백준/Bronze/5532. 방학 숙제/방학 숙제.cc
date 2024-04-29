#include <stdio.h>

int main() {
    int L, A, B, C, D, day=0;
    
    scanf("%d %d %d %d %d", &L, &A, &B, &C, &D);
    
    
    while(1) {
        if(A<=0 && B<=0) break;
        
        A-=C;
        B-=D;
        day++;
    }
    
    printf("%d", L-day);
    
    
    return 0;
}