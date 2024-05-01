#include <stdio.h>
#include <string.h>

int main() {
    char palindrome[100000];
    int count=0;
    
    while(1) {
        scanf("%s", palindrome);
        int l = strlen(palindrome)-1;
        
        if(palindrome[0]=='0') break;
        
        for(int i=0;i<strlen(palindrome)/2;i++) {
            if(palindrome[i]==palindrome[l]) {
                count++;
            }
            
            l--;
        }
        
        if(count==strlen(palindrome)/2) {
            printf("yes\n");
        } else printf("no\n");
        
        palindrome[0] = '0';
        count=0;
    }
    
    return 0;
}