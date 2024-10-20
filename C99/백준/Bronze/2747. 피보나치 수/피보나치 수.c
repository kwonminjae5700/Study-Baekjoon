#include <stdio.h>

int memo[10001] = {0, 1};

int f(int num) {
    if(memo[num] || !num) return memo[num];

    return memo[num] = f(num-1) + f(num-2);
}

int main() {
    int N;

    scanf("%d", &N);
    
    printf("%d", f(N));

    return 0;
}