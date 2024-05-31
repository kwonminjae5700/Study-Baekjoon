#include <stdio.h>

int main() {
    int N, X, sum=0, max=-100000, count=1;

    scanf("%d %d", &N, &X); int visitant[N];

    for(int i=0;i<N;i++) scanf("%d", &visitant[i]);

    for(int i=0;i<X;i++) sum += visitant[i];

    max = sum;

    for(int i=X;i<N;i++) {
        
        sum += visitant[i] - visitant[i-X];
        
        if(sum==max) count++;
        else if(sum>max) {
            max = sum;
            count=1;
        }
    }

    if(max == 0) printf("SAD");
    else printf("%d\n%d", max, count);

    return 0;
}