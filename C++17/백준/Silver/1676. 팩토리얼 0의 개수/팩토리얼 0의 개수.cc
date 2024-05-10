#include <stdio.h>

int main() {
    int N, D_125, D_25, D_5;
    
    scanf("%d", &N);
    
    D_125 = N/125;
    D_25 = N/25;
    D_5 = N/5;
    
    printf("%d", D_125 + D_25 + D_5);
    
    
    return 0;
}