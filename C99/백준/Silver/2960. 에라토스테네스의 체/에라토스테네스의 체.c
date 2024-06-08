#include <stdio.h>

int main() {
    int N, K, count=0, arr[10001]={0}, l_num;

    scanf("%d %d", &N, &K);

    for(int i=2;i<=N;i++) arr[i]=i;

    for(int i=2;i<=N;i++) {
        if(arr[i]==0) continue;
        
        for(int j=1;i*j<=N;j++) {
            if(arr[i*j]!=0) {
                arr[i*j]=0;
                count++;
            }

            if(count==K) {
                l_num = i*j;
                goto jump;
            }
        }
    }
    
jump:
    printf("%d", l_num);

    

    return 0;
}