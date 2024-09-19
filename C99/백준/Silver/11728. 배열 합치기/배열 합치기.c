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
    int N, M, idx_A=0, idx_B=0;

    scanf("%d %d", &N, &M);

    int A[N], B[M];

    for(int i=0;i<N;i++) scanf("%d", &A[i]);
    for(int i=0;i<M;i++) scanf("%d", &B[i]);

    qsort(A, N, sizeof(int), compare);
    qsort(B, M, sizeof(int), compare);

    for(int i=0;i<N+M;i++) {
        if(idx_A>=N) printf("%d ", B[idx_B++]);
        else if(idx_B>=M) printf("%d ", A[idx_A++]);
        else if(A[idx_A]<=B[idx_B]) {
            printf("%d ", A[idx_A++]);
        } else printf("%d ", B[idx_B++]);
    }

    return 0;
}