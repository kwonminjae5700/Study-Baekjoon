#include <stdio.h>

int main() {
    int N, K, count=0;

    scanf("%d %d", &N, &K); int coin[N];

    for(int i=0;i<N;i++) scanf("%d", &coin[i]);

    for(int i=N-1;i>=0;i--) {
        count += K/coin[i];
        K%=coin[i];
    }

    printf("%d", count);

    

    return 0;
}