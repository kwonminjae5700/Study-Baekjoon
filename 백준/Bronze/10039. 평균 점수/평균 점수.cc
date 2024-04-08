#include <stdio.h>

int main() {
    int N, sum=0;

    for(int i=1;i<=5;i++) {
        scanf("%d", &N);

        if(N<40)
            N=40;

        sum+=N;
    }

    printf("%d", sum/5);

    return 0;
}