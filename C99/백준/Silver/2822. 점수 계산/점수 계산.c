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

typedef struct {
    int score;
    int num;
} INFO;

int main() {
    int num, idx, sum=0, order[5];
    
    INFO info[8];
    INFO temp;
    
    for(int i=0;i<8;i++) {
        info[i].num = i+1;

        scanf("%d", &info[i].score);
    }

    for(int i=0;i<8;i++) {
        idx = i;

        for(int j=i;j<8;j++) 
            if(info[j].score > info[idx].score) idx = j;
        
        temp = info[i];
        info[i] = info[idx];
        info[idx] = temp;
        
    }

    

    for(int i=0;i<5;i++) {
        sum += info[i].score;

        order[i] = info[i].num;
    }

    qsort(order, 5, sizeof(int), compare);

    printf("%d\n", sum);

    for(int i=0;i<5;i++) printf("%d ", order[i]);
    
    return 0;
}