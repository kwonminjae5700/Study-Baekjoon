#include <stdio.h>

int main() {
    long long int N, sum=1;

    scanf("%lld", &N);

    for(int i=N;i>=2;i--) sum*=i;

    printf("%lld", sum);


    return 0;
}