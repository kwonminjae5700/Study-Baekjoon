#include <stdio.h>

int main() {
    int N, M;

    scanf("%d %d", &N, &M);

    printf("%s", (N*100>=M ? "Yes":"No"));


    return 0;
}