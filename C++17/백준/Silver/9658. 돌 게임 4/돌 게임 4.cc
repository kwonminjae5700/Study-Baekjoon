#include <stdio.h>

int main() {
    int N;
    
    scanf("%d", &N);
    
    printf("%s", (N%7)==1 || (N%7)==3 ? "CY":"SK");
    
    
    return 0;
}