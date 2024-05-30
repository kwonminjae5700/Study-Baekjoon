#include <stdio.h>

int main() {
    int T, H, W, N, Y, X;
    
    scanf("%d", &T); 
    
    for(int i=0;i<T;i++) {
        scanf("%d %d %d", &H, &W, &N);
        
        if(N%H==0) Y = H;
        else Y = N%H;
        
        if(N%H==0) X = N/H;
        else X = N/H+1;

        printf("%d%02d\n", Y, X);
    }
    
    return 0;
}