#include <stdio.h>
#include <string.h>

int main() {
    
    char num[100000001];
    
    scanf("%s", num);
    
    for(int i=57;i>=48;i--) {
        for(int j=0;j<strlen(num);j++) {
            if(i == num[j]) printf("%c", num[j]);
        }
        
    }
    
    return 0;
}