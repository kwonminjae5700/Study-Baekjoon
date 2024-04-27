#include <stdio.h>

int main() {
    int M, black_jack, sum, result=0;
    
    scanf("%d %d", &M, &black_jack);
    int card[M];
    
    for(int i=0;i<M;i++) {
        scanf("%d", &card[i]);
    }
    
    for(int i=0;i<M;i++) {
        for(int j=i+1;j<M;j++) {
            for(int k=j+1;k<M;k++) {
                sum = card[i] + card[j] + card[k];
                
                if(black_jack>=sum && sum>result) {
                    result=sum;
                }
            }
        }
    }
    
    printf("%d", result);
    
    
    return 0;
}