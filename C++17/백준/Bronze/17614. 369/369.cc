#include <stdio.h>

int main() {
    int N, clap=0, temp;
    
    scanf("%d", &N);
    
    for(int i=1;i<=N;i++) {
        temp = i;
        while(1) {
            if(temp<10) {
                if(temp/3==1) {
                    clap++;
                }
                
                break;
            }
            
            if((temp%10)/3==1) clap++;
            temp/=10;
        }
    }
    
    printf("%d", clap-1);
    
    return 0;
}