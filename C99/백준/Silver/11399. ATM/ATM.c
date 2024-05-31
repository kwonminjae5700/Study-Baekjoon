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
    int N, sum=0, temp=0;

    scanf("%d", &N); int time[N];

    for(int i=0;i<N;i++) scanf("%d", &time[i]);

    qsort(time, N, sizeof(int), compare);

    for(int i=0;i<N;i++) {
        sum += temp + time[i];
        temp+=time[i];
    }

    printf("%d", sum);

    return 0;
}