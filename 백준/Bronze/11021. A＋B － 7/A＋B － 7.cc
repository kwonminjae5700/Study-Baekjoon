#include <stdio.h>

int main(void) {
    int T, n1, n2;


    scanf("%d", &T);
    for(int i=0; i<T;i++) {
        scanf("%d %d", &n1, &n2);
        printf("Case #%d: %d\n",i+1, n1+n2);
    }
}