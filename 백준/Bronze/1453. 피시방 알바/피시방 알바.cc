#include <stdio.h>

int main() {
    int N, count=0, can_sit=0; // N : 손님의 수

    scanf("%d", &N);

    int arr[N];
    
    for(int i=0;i<N;i++) {
        scanf("%d", &arr[i]);
    }

    for(int i=0;i<N;i++) {
            for(int j=i+1;j<N;j++) {
                if(arr[i] == arr[j]) {
                    count++;
                }
            }

            if(count>=1) {
            can_sit++;
            }

            count=0;
        }

    printf("%d", can_sit);
    
    return 0;
}