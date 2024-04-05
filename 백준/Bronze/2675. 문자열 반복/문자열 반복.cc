#include <stdio.h>

int main() {
    int N, T;
    char S[21];

    scanf("%d", &T);

    for(int i=1;i<=T;i++) {
        scanf("%d %s", &N, S);

        for(int j=0;S[j]!='\0';j++) {
            for(int l=0;l<N;l++) {
                printf("%c", S[j]);
            }
        }
        printf("\n");
    }

    return 0;
}