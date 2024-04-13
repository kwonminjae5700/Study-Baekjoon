#include <stdio.h>

int main() {
    int n1[3], n2[3];

    scanf("%1d%1d%1d %1d%1d%1d", &n1[0], &n1[1], &n1[2], &n2[0], &n2[1], &n2[2]);

    int num1 = n1[2]*100 + n1[1]*10 + n1[0];
    int num2 = n2[2]*100 + n2[1]*10 + n2[0];
    
    printf("%d", (num1>num2 ? num1:num2));
    return 0;
}