#include <stdio.h>

int main(void) {
    int T;

    scanf("%d", &T);
    
    for(int i=1;i<=T;i++) {
        for(int j=1;j<=i;j++) {
            printf("*");
        }
        printf("\n");
    }
}