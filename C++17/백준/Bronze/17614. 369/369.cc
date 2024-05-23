#include <stdio.h>

int main() {
    int N, clap=0, temp;
    
    scanf("%d", &N);
    
    for(int i=1;i<=N;i++) {
        temp = i;
        while(temp > 0) {
            int num = temp % 10;
            if(num % 3 == 0 && num != 0){
                clap++;
            }
            temp = temp / 10;
        }
    }
    
    printf("%d", clap);
    
    return 0;
}