#include <stdio.h>

int main() {
    int multitap, plug, can_charge=0;
    
    scanf("%d", &multitap);
    
    for(int i=1;i<=multitap;i++) {
        scanf("%d", &plug);
        
        can_charge+=plug;
    }
    
    printf("%d", can_charge-multitap+1);
    return 0;
}