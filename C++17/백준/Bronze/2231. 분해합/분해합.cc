#include <stdio.h>

int main() {
    int N, cal, temp, sum=0, real_sum, count=0;
    
    scanf("%d", &N);
    
    for(int i=1;i<N;i++) {
        cal = i;
        while(1) {
            if(cal%10==0) break;
            
            temp = cal%10;
            sum+=temp;
            cal = cal/10;
        }
        
        real_sum = sum+i;
        
        if(real_sum==N) {
            printf("%d", i);
            count++;
            break;
        }
        sum=0;
    }
    
    if(count==0)
        printf("0");
    
    return 0;
}