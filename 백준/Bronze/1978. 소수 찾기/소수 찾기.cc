#include <stdio.h>

int main(void) {
    int N, count=0, real_decimal=0;
    
    scanf("%d", &N);

    int arr[N];
    
    for(int i=0;i<N;i++) {
        scanf("%d", &arr[i]);

        for(int j=2;j<=arr[i];j++) {
            if(arr[i]%j==0) { // 나누어 떨어지면 count를 +1 한다.
                count++;
            } 

            
        }
        
        if(count==1) {
            real_decimal++;
        }

        count=0;
    }

    printf("%d", real_decimal);
}