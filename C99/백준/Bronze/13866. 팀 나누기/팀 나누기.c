#include <stdio.h>

int main() {
    int num[4], temp, n1, n2;

    for(int i=0;i<4;i++) scanf("%d", &num[i]);

    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            if(num[j]>num[j+1]) {
                temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
    }

    n1 = num[0] + num[3];
    n2 = num[1] + num[2];

    printf("%d", (n1>n2 ? n1-n2 : n2-n1));
}