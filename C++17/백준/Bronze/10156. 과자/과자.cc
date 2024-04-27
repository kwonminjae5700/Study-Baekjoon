#include <stdio.h>

int main() {
    int price, count, money;
    
    scanf("%d %d %d", &price, &count, &money);
    
    printf("%d", (price*count-money>=0 ?price*count-money:0));
    
    return 0;
}