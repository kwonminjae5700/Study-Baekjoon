#include <stdio.h>
#include <stdlib.h>

int compar(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}


int main() {
    int N;

    scanf("%d", &N); int arr[N];

    for(int i=0;i<N;i++) scanf("%d", &arr[i]);

    qsort(arr, N, sizeof(int), compar);

    for(int i=N-1;i>=0;i--) printf("%d\n", arr[i]);


    return 0;
}