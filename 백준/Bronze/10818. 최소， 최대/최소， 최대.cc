#include <stdio.h>

int main(void) {
    int N, max_n=-10000000, min_n=10000000;

    scanf("%d", &N);

    int arr[N];

    for(int i=0;i<N;i++) {
        scanf("%d", &arr[i]);
        if(arr[i]>=max_n)
            max_n = arr[i];

        if(arr[i]<=min_n)
            min_n = arr[i];  
    }

    printf("%d %d", min_n, max_n);
    
}