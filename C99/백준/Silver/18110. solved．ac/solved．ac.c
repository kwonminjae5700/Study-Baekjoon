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
    int N, F, sum=0;
    float T_avg;

    scanf("%d", &N); int score[N];

    if(N!=0) {
        for(int i=0;i<N;i++) {
            scanf("%d", &score[i]);
        }

        qsort(score, N, sizeof(int), compare);
    
        T_avg = N*0.15;
        F = T_avg;
    
        if(T_avg-F >= 0.5) F++;
    
        for(int i=F;i<N-F;i++) sum+=score[i];
        
        T_avg = (float)sum/(N-F*2);
        F = T_avg;
    
        if(T_avg-F >= 0.5) F++;
    
        printf("%d", F);
    } else printf("0");

    




    return 0;
}