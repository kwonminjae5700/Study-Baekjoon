#include <stdio.h>

int main() {
    int N, sum=0, min=101, count=0;

    for(int i=1;i<=7;i++) {
        scanf("%d", &N);

        if(N%2!=0) {
            count++;
            sum+=N;
            if(N<min)
                min = N;
        }
    }
    if(count==0)
        printf("-1");
    else
        printf("%d\n%d", sum, min);
    return 0;
}