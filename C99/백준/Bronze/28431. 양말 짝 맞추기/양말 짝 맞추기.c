#include <stdio.h>

int main() {
    int socks[11] = {0}, num;

    for(int i=0;i<5;i++) {
        scanf("%d", &num);

        socks[num]++;
    }

    for(int i=0;i<10;i++) {
        if(socks[i]%2) printf("%d", i);
    }
    



    return 0;
}