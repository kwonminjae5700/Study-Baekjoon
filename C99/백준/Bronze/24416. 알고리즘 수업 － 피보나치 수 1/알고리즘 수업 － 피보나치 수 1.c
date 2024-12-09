#include <stdio.h>

int cnt1, cnt2, memo[41];

int fib_memo(int n) {
    if(memo[n]) return memo[n];
    else if(n==1 || n==2) return memo[n] = 1;
    else {
        cnt2++;
        return memo[n] = (fib_memo(n-1) + fib_memo(n-2));
    }
}

int fib(int n) {
    if(n==1 || n==2) {
        cnt1++;
        return 1;
    }
    else return (fib(n - 1) + fib(n - 2));
}

int main() {
    int K;

    scanf("%d", &K);

    fib(K);
    fib_memo(K);

    printf("%d %d", cnt1, cnt2);

    return 0;
}