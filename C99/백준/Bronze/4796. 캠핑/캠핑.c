#include <stdio.h>

int main() {
    int L, P, V, Free, count=0;
    
    while(1) {
        count++;
        scanf("%d %d %d", &L, &P, &V);
        
        if(L+P+V==0) break;
        
        Free = ((V%P))>=L?L:(V%P);
        Free+=(V/P)*L;
        
        printf("Case %d: %d\n", count, Free);
    }
    
    return 0;
}