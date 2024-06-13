#include <stdio.h>

int main() {
    int M, N, idx=0, num[1000001]={0}, real[1000001]={0};

    scanf("%d %d", &M, &N); 
    

    for(int i=2;i<=N;i++) num[i] = i;

    for(int i=2;i<=N;i++) {
        if(num[i]!=0 && M<=num[i]) {
            real[idx] = num[i];
            idx++;
        }
        
        for(int j=1;i*j<=N;j++) {
            num[i*j]=0;
        }
    }

    for(int i=0;i<idx;i++,puts("")) printf("%d", real[i]);
    

    return 0;
}