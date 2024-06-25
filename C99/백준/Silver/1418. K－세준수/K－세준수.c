#include <stdio.h>

int main() {
    int N, K, num[100001] = {0}, decimal[100001]={0}, cnt=0, max, k_num=0;

    scanf("%d\n%d", &N, &K);

    for(int i=2;i<=N;i++) {
        if(num[i]==0) {
            decimal[cnt++] = i;
        }

        for(int j=1;i*j<=N;j++) {
            num[i*j] = 1;
        }
    }
    
    for(int i=1;i<=N;i++) {
        max = 0;
        for(int j=0;j<cnt;j++) {
            if(i%decimal[j]==0 && decimal[j]>K) {
                max++;
                break;
            }
        }

        if(max==0) k_num++;
    }

    printf("%d", k_num);


    return 0;
}