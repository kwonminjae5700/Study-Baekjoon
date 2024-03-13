#include <stdio.h>

int main(void) {
    int D1, D2, D3;

    scanf("%d %d %d", &D1, &D2, &D3);

    if(D1==D2 && D1==D3) {
        printf("%d", (D1*1000)+10000);
    } else if(D1==D2 || D1==D3) {
            printf("%d", (D1*100)+1000);
    } else if(D2==D3) {
        printf("%d", (D2*100)+1000);
    } else
        if(D1>D2 && D1>D3) {
            printf("%d", D1*100);
        } else if(D2>D1 && D2>D3) {
            printf("%d", D2*100);
        } else if(D3>D1 && D3>D2) {
            printf("%d", D3*100);
        }
}