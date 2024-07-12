#include <stdio.h>

int main() {
    int N, coin=0;

    scanf("%d", &N);

    if(N==1 || N==3) printf("-1");
    else {
        while(N!=0) {
    
            if(N%5==0) {
                coin += N/5;
                N%=5;
                break;
            }

            N-=2;
            coin++;
        }

        printf("%d", coin);
    }

    return 0;
}