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
    int N, M;
    
    scanf("%d", &N); int arr_N[N];
    
    for(int i=0;i<N;i++) scanf("%d", &arr_N[i]);
    
    scanf("%d", &M); int arr_M[M];
    
    for(int i=0;i<M;i++) scanf("%d", &arr_M[i]);
    
    qsort(arr_N, N, sizeof(int), compare);
    
    int left, right, found;
    
    for(int i=0;i<M;i++) {
        left = 0;
        right = N-1;
        found=0;
        
        while(left<=right) {
            int mid = (left+right) / 2;
            
            if(arr_M[i] == arr_N[mid]) {
                printf("1 ");
                found++;
                break;
            }
            
            if(arr_M[i] < arr_N[mid]) {
                right = mid-1;
            } else {
                left = mid+1;
            }
        }
        
        if(found==0) {
            printf("0 ");
            
        }
        
    }
    
    
    
    return 0;
}