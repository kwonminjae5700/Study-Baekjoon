#include <stdio.h>

int main() {
    int N, C[3], cnt=0;

    scanf("%d", &N);

    for(int i=0;i<3;i++) {
        scanf("%d", &C[i]);

        if(C[i] == N) cnt+=N;
        else if(N > C[i]) cnt+=C[i];
        else if(N < C[i]) cnt+= (N%C[i]);
    }

    printf("%d", cnt);


    return 0;
}