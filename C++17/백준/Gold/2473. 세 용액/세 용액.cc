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
    int N;
    long long int answer=3000000001, p[3];
    
    scanf("%d", &N); long long int arr[N];
    
    for(int i=0;i<N;i++) scanf("%lld", &arr[i]);
    
    qsort(arr, N, sizeof(long long int), compare);
    
    for(int l=0;l<N;l++) {
        int left=l+1, right=N-1;
        long long int temp, abs;
        
        while(left<right) {
            if(l==left) left++; 
            else if(l==right) right--;
            else {
                temp = arr[left] + arr[right] + arr[l];
            
                if(temp<0) abs=temp*-1;
                else abs=temp;
                
                if(abs<answer) {
                    answer=abs;
                    p[0] = arr[left];
                    p[1] = arr[right];
                    p[2] = arr[l];
                    
                }
                
                if(temp<0) left++;
                else if(temp>0) right--;
                else break;
            }
        }
    }
    
    qsort(p, 3, sizeof(long long int), compare);
    
    for(int i=0;i<3;i++) printf("%lld ", p[i]);
    
    return 0;
}