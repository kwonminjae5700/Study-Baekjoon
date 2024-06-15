#include <stdio.h>

int main() {
    int M, N, num[10001]={0}, sum=0, min=1000000;

    scanf("%d\n%d", &M, &N);

    for(int i=2;i<=N;i++) num[i] = i;

    for(int i=2;i<=N;i++) {
        if(num[i]!=0 && num[i]>=M) {
            if(num[i]<min) min=num[i];

            sum+=num[i];
        }
        
        for(int j=1;i*j<=N;j++) {
            num[i*j]=0;
        }
    }

    if(sum) printf("%d\n%d", sum, min);
    else printf("-1"); 

    return 0;
}