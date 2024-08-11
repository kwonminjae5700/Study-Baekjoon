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
    int K, N, gap, max, temp;

    scanf("%d", &K);

    for(int i=0;i<K;i++) {
        printf("Class %d\n", i+1);
        scanf("%d", &N);

        int num[N];
        max = -100;

        for(int j=0;j<N;j++) scanf("%d", &num[j]);

        qsort(num, N, sizeof(int), compare);

        for(int j=N-1;j>0;j--) {
            temp = num[j]-num[j-1];
            
            if(temp > max) max = temp;
        }
       

        printf("Max %d, Min %d, Largest gap %d\n", num[N-1], num[0], max);
    }



    return 0;
}