#include <stdio.h>
#include <string.h>

int main() {
    int N, len;
    char pw[21];

    scanf("%d", &N);

    for(int i=0;i<N;i++) {
        scanf("%s", pw);

        len = strlen(pw);

        if(len >= 6 && len <= 9) printf("yes\n");
        else printf("no\n");
    }


    return 0;
}