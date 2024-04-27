#include <stdio.h>
#include <string.h>

int main() {
    int T;
    char name[21];
    
    scanf("%d", &T);
    
    for(int i=1;i<=T;i++) {
        scanf("%s", name);
        
        for(int j=0;j<strlen(name);j++) {
            if(name[j]<97) {
                name[j] = name[j] + 32;
            }
        }
        printf("%s\n", name);
    }
    
    return 0;
}