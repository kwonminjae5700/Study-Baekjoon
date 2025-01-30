#include <stdio.h>
#include <string.h>

int main() {
    int sum=0, num=0, flag=0, first=1;
    char ex[52];

    scanf("%s", ex);

    ex[strlen(ex)] = '+';

    for(int i=0;ex[i];i++) {
        if(ex[i] >= '0' && ex[i] <= '9') {
            num *= 10;
            num += (ex[i]-'0');
        } else {
            if(ex[i] == '-') flag = 1;
    
            if(flag) {
                if(first) first=0;
                else {
                    num *= -1;
                }
            }
            
            sum += num;
            num=0;
        }
    }

    printf("%d", sum);
    
    return 0;
}