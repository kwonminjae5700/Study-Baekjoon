#include <stdio.h>

long long memo[10001] = {0, 1};

long long f(long long num) {
    if(memo[num] || !num) return memo[num];

    return memo[num] = f(num-1) + f(num-2);
}

int main() {
    long long N;

    scanf("%lld", &N);
    
    printf("%lld", f(N));

    return 0;
}