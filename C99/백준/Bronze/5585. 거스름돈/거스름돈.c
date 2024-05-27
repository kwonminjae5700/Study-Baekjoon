#include <stdio.h>

int main() {
    int money, change[6] = {500, 100, 50, 10, 5, 1}, count=0;
    
    scanf("%d", &money);

    money = 1000-money;
    
    for(int i=0;i<6;i++) {
        count+=money/change[i];
        money%=change[i];
    }
    
    printf("%d", count);
    
    return 0;
}