#include <stdio.h>

int main() {
    int n1=1, n2=1;

    while(1) {
        scanf("%d %d", &n1, &n2);
        
        if(n1+n2==0)
            break;

        printf("%s\n", (n1>n2 ? "Yes":"No"));
    }

    return 0;
}