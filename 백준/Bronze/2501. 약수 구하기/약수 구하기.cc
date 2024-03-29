#include <stdio.h>

int main() {
    int N, K, a=0;

    scanf("%d %d", &N, &K);

    int arr[N];

    for(int i=0;i<N;i++)
        arr[i]=0;

    for(int i=1;i<=N;i++) {
        if(N%i==0) {
            a++;
            arr[a]=i;
        }
    }
    
    printf("%d", arr[K]);

    return 0;
}