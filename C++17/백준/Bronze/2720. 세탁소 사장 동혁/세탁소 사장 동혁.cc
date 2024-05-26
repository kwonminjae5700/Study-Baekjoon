#include <stdio.h>

int main() {
    int T, money[4] = {25, 10, 5, 1};
    
    scanf("%d", &T); int C[T];
    
    for(int i=0;i<T;i++) scanf("%d", &C[i]);
    
    for(int i=0;i<T;i++,puts("")) {
        for(int j=0;j<4;j++) {
            printf("%d ", C[i]/money[j]);
            C[i]%=money[j];
        }
    }
    
    return 0;
}