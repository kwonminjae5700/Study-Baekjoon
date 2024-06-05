#include <stdio.h>

int GCD(int a, int b) {
    int result;

    while(b!=0) {
        result = a%b;
        a = b;
        b = result;
    }

    return a;
}

int main() {
    int T, n1, n2;

    scanf("%d", &T);

    for(int i=0;i<T;i++) {
        scanf("%d %d", &n1 ,&n2);
        printf("%d\n", GCD(n1, n2));
    }

    return 0;
}