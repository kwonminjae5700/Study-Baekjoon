#include <stdio.h>

int main(void) {
    
    int N, v, count=0;

     scanf("%d", &N);
    int num[N];

   
    
    for(int i=0;i<N;i++) {
        scanf("%d", &num[i]);
    }

    scanf("%d", &v);
    for(int i=0;i<N;i++) {
        if(num[i]==v) {
            count++;
        }
    }
    
    printf("%d", count);
}