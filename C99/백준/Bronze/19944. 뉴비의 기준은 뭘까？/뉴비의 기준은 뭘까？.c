#include <stdio.h>

int main() {
    int N, M;

    scanf("%d %d", &N, &M);

    if(M==1 || M==2) printf("NEWBIE!");
    else if(N>=M) printf("OLDBIE!");
    else printf("TLE!");


    return 0;
}