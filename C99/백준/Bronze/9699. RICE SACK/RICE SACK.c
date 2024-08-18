#include <stdio.h>

int main() {
    int N, num, max;

    scanf("%d", &N);

    for(int i=0;i<N;i++) {
        max = -10000000;
        
        for(int j=0;j<5;j++) {
            scanf("%d", &num);

            if(num>max) max = num;
        }

        printf("Case #%d: %d\n", i+1, max);
    }


    return 0;
}