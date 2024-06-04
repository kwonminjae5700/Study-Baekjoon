#include <stdio.h>

int main() {
    int N, score=1, sum=0;

    scanf("%d", &N); int arr[N];

    for(int i=0;i<N;i++) scanf("%d", &arr[i]);

    for(int i=0;i<N;i++) {
        if(arr[i]) {
            sum+=score;
            score++;
        } else if(!arr[i]) {
            score=1;
        }
    }
    
    printf("%d", sum);
    

    return 0;
}