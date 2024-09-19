#include <stdio.h>
#include <stdlib.h>

int static compare (const void* first, const void* second)
{
    if (*(int*)first < *(int*)second)
        return 1;
    else if (*(int*)first > *(int*)second)
        return -1;
    else
        return 0;
}

int main() {
    int count[3], sum=0, discount=0, temp;

    scanf("%d %d %d", &count[0], &count[1], &count[2]);

    int B_arr[1001]={0}, C_arr[1001]={0}, D_arr[1001]={0};

    for(int i=0;i<count[0];i++) scanf("%d", &B_arr[i]);
    for(int i=0;i<count[1];i++) scanf("%d", &C_arr[i]);
    for(int i=0;i<count[2];i++) scanf("%d", &D_arr[i]);

    qsort(B_arr, count[0], sizeof(int), compare);
    qsort(C_arr, count[1], sizeof(int), compare);
    qsort(D_arr, count[2], sizeof(int), compare);
    qsort(count, 3, sizeof(int), compare);
    
    for(int i=0;i<count[0];i++) {
        temp = B_arr[i] + C_arr[i] + D_arr[i];
        sum += temp;

        if(B_arr[i] && C_arr[i]) {
            if(D_arr[i]) discount += temp*0.9;
            else discount += temp;
        } else discount += temp;
    }

    printf("%d\n%d", sum, discount);
    
    
    
    return 0;
}