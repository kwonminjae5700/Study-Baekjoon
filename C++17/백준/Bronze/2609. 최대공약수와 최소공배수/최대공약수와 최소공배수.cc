#include <stdio.h>

int main() {
    int n1, n2, G, S;
    
    scanf("%d %d", &n1, &n2);
    
    for(int i=1;i<=(n1>n2?n2:n1);i++) {
        if(n1%i==0 && n2%i==0) G=i;
    }
    
    for(int i=(n1>n2?n2:n1);i<=100000000;i++) {
        if(i%n1==0 && i%n2==0) {
            S=i;
            break;
        }
    }
    
    
    
    printf("%d\n%d", G, S);
    
    return 0;
}