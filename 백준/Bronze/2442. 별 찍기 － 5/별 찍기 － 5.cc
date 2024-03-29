#include <stdio.h>

int main() {
    int N;

    scanf("%d", &N);

    int number = ((2*N-1)-1)/2;
    
    for(int i=1;i<=2*N-1;i+=2) {

        for(int l=number;l>0;l--) {
            printf(" ");
        }
        
        for(int j=1;j<=i;j++) {
            printf("*");
        }

        number--;
        printf("\n");
    }

    return 0;
}