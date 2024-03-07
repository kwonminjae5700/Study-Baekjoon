#include <stdio.h>

int main() {
    int n1, n21, n22, n23;

    scanf("%d", &n1);
    scanf("%1d%1d%1d", &n21, &n22, &n23);

    printf("%d\n", n1*n23);
    printf("%d\n", n1*n22);
    printf("%d\n", n1*n21);
    int sum = n21*100 + n22*10 + n23;
    printf("%d\n", n1*sum);

}