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
    int N, L, index=0;

    scanf("%d %d", &N, &L); int fruit[N];

    for(int i=0;i<N;i++) scanf("%d", &fruit[i]);

    qsort(fruit, N, sizeof(int), compare);

    while(fruit[index]<=L) {
        L++;
        index++;

        if(index+1 == N+1) {
            break;
        }
    }

    printf("%d", L);
    
    
    return 0;
}