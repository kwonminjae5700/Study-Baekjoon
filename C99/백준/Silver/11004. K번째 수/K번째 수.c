#include <stdio.h>
#include <stdlib.h> 

int static compare (const void* first, const void* second)
{
    if (*(int*)first > *(int*)second)
        return 1;
    else if (*(int*)first < *(int*)second)
        return -1;
    else
        return 0;
}

int main() {
    int N, K;

    scanf("%d %d", &N, &K); int num[N];

    for(int i=0;i<N;i++) scanf("%d", &num[i]);

    qsort(num, N, sizeof(int), compare);
    
    printf("%d", num[K-1]);
}