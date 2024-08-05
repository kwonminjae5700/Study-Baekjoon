#include <stdio.h>

int main() {
    int N, sum=0, near=0;

    scanf("%d", &N);

    int arr[N];

    for(int i=0;i<N;i++) scanf("%d", &arr[i]);

    for(int i=0;i<N-1;i++) {
        if((near==0) && (arr[i]+1 != arr[i+1])) {
            sum += arr[i];
        } else if((near==1) && (arr[i]+1 == arr[i+1])) {
            
        } else if((near == 0) && (arr[i]+1 == arr[i+1])) {
            near = 1;
            sum += arr[i];
        } else near = 0;
    }

    if((arr[N-1]-1) != arr[N-2]) sum += arr[N-1];

    printf("%d", sum);


    return 0;
}