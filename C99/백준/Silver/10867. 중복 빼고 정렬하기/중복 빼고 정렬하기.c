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
    int N, positive[100001] = {0}, negative[100001] = {0}, temp;

    scanf("%d", &N); int num[N];

    for(int i=0;i<N;i++) scanf("%d", &num[i]);

    qsort(num, N, sizeof(int), compare);

    for(int i=0;i<N;i++) {
        
        if(num[i]>=0) {
            temp = num[i];
            
            if(!positive[temp]) {
                printf("%d ", temp);
                positive[temp]++;
            }
        } else {
            temp = num[i]*-1;
            if(!negative[temp]) {
                printf("-%d ", temp);
                negative[temp]++;
            }
        }
    }


    return 0;
}