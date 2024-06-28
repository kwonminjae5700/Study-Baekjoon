#include <stdio.h>

int main() {
    int N, star = 1;

    scanf("%d", &N);

    for (int i = N - 1; i >= 0; i--, puts("")) {
        for (int j = i; j > 0; j--) printf(" ");
        for (int j = 0; j < star; j++) printf("*");
        star += 2;
    }

    star -= 4;

    for (int i = N - 2; i >= 0; i--, puts("")) {
        for (int j = 0; j < N - i - 1; j++) printf(" ");
        for (int j = 0; j < star; j++) printf("*");
        star -= 2;
    }

    return 0;
}