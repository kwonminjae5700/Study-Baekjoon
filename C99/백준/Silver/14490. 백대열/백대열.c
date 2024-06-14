#include <stdio.h>

int GCD(int n1, int n2) {
    int result;

    while(n1%n2!=0) {
        result = n1%n2;
        n1 = n2;
        n2 = result;
    }

    return n2;
}

int main() {
    int A, B, G;

    scanf("%d:%d", &A, &B);

    G = GCD(A, B);

    printf("%d:%d", A/G, B/G);

    return 0;
}