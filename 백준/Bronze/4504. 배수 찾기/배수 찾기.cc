#include <stdio.h>

int main() {
    int n, number=1;

    scanf("%d", &n);

    while(1) {
        scanf("%d", &number);

        if(number==0)
            break;

        if(number%n==0) {
            printf("%d is a multiple of %d.\n", number, n);
        } else
            printf("%d is NOT a multiple of %d.\n", number, n);
    } 
    
    return 0;
}