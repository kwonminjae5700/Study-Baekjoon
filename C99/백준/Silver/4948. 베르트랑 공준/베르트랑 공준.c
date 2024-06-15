#include <stdio.h>

int main() {
    int N;

    scanf("%d", &N); 

    while(N!=0) {
        int num[1000001]={0}, cnt=0;

        for(int i=2;i<=2*N;i++) num[i] = i;

        for(int i=2;i<=2*N;i++) {
            if(num[i]!=0 && num[i]>N) cnt++;
            
            for(int j=1;i*j<=2*N;j++) {
                num[i*j]=0;
            }
        }

        printf("%d\n", cnt);

        scanf("%d", &N); 
    }


    return 0;
}