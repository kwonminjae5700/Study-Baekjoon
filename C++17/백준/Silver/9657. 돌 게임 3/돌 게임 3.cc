#include <stdio.h>

int main() {
    int N;
    
    scanf("%d", &N);
    
    printf("%s", ((N%7)==2 || (N%7)==0) ? "CY":"SK");
    
    
    return 0;
}