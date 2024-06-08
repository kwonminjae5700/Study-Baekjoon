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
    int P, N;

    scanf("%d %d", &P, &N); int A[N];

    for(int i=0;i<N;i++) scanf("%d", &A[i]);

    qsort(A, N, sizeof(int), compare);

    int i=0, count=0;
    
    while(P<200) {
        if(count==N) {
            i = N;
            break;
        }
        
        P+=A[i++];

        count++;

        
    }

    printf("%d", i);
    
    return 0;
}