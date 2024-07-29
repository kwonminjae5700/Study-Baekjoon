#include <stdio.h>

int main() {
    int N, K, sum=0, max = -1000000000;

    scanf("%d %d", &N, &K); 
    
    int num[N];

    for (int i=0;i<N;i++) {
        scanf("%d", &num[i]);

        if(i<K) sum += num[i];
    }
    
    max = sum;

    for (int i=K;i<N;i++) {
        sum += num[i] - num[i-K];
        if (sum>max) {
            max = sum;
        }
    }

    printf("%d", max);

    return 0;
}