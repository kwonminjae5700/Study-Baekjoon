#include <stdio.h>

int main() {
    int N;
    
    scanf("%d", &N);
    
    printf("%s", (N%7>=1 && (N%7)!=2 && (N%7)!=7) ? "SK":"CY");
    
    
    return 0;
}