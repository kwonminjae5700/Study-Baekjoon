#include <stdio.h>

int main() {
    int A, B, C, result[10]={0,0,0,0,0,0,0,0,0,0}, temp;
    
    scanf("%d %d %d", &A, &B, &C);
    int num = A*B*C;
    
    while(1) {
        if(num/1==0) break;
        
        temp = num%10;
        result[temp]++;
        num = num/10;
        
    }
    
    for(int i=0;i<10;i++) printf("%d\n", result[i]);
    return 0;
}