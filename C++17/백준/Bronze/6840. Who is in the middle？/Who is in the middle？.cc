#include <stdio.h>

int main() {
    int num[3], temp;
    
    for(int i=0;i<3;i++) scanf("%d", &num[i]);
    
    for(int i=0;i<3;i++) {
        for(int j=1;j<3;j++) {
            if(num[i]>num[j]) {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
    
    printf("%d", num[2]);
    
    
    return 0;
}