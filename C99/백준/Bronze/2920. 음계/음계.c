#include <stdio.h>

int main() {
    int scale[8], ascending=0, descending=0;
    
    for(int i=0;i<8;i++) {
        scanf("%d", &scale[i]);
    }
    
    for(int i=0;i<8;i++) {
        if(scale[i]==i+1) ascending++;
        else if(scale[i]==(8-i)) descending++;
    }
    
    if(ascending==8) printf("ascending");
    else if(descending==8) printf("descending");
    else printf("mixed");
    
    return 0;
}