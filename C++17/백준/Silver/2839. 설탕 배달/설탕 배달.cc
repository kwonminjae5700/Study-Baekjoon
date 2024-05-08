#include <stdio.h>

int main() {
    int N, count=0;
    
    scanf("%d", &N);
    
    while(1) {
        if(N<=0 || N==7) break;
        if(N<3 || N==4) break;
        else {
            if(N%3==0 && N<15) {
                N-=3;
                count++;
            } else {
                N-=5;
                count++;
            }
        }
        
        
    }
    
    if(count==0) printf("-1");
    else printf("%d", count);
    
    
    
    return 0;
}