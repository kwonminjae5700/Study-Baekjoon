#include <stdio.h>

int main() {
    int N, k;

    scanf("%d", &N);

    for(int i=0;i<N;i++,puts("")) {
        scanf("%d", &k);

        for(int j=0;j<k;j++) printf("=");
    }

    return 0;
}