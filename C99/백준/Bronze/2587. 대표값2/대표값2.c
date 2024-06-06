#include <stdio.h>

int main() {
    int N[5], sum=0, avg, temp;

    for(int i=0;i<5;i++) {
        scanf("%d", &N[i]);
        sum+=N[i];
    }

    avg = sum/5;

    for(int i=0;i<5;i++) {
        for(int j=i;j<5;j++) {
            if(N[i] > N[j]) {
                temp = N[i];
                N[i] = N[j];
                N[j] = temp;
            }
        }
    }

    printf("%d\n%d", avg, N[2]);
}