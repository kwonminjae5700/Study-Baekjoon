#include <stdio.h>
#include <stdlib.h>

int static compare (const void* first, const void* second) {
    if (*(int*)first > *(int*)second)
        return 1;
    else if (*(int*)first < *(int*)second)
        return -1;
    else
        return 0;
}

int main() {
    int N, answer=2000000001, p[2];
    
    scanf("%d", &N); int arr[N];
    
    for(int i=0;i<N;i++) scanf("%d", &arr[i]);
    
    qsort(arr, N, sizeof(int), compare);
    
    int left=0, right=N-1, temp,abs;
    
    while(left<right) {
        temp = arr[left] + arr[right];
        if(temp<0) abs = temp * -1;
        else abs = temp;
        
        if(abs<answer) {
            answer = abs;
            p[0] = arr[left];
            p[1] = arr[right];
        }
        
        if(temp<0) left++;
        else if(temp>0) right--;
        else break;
        
        
    }
    
    for(int i=0;i<2;i++) printf("%d ", p[i]);
    
    return 0;
}