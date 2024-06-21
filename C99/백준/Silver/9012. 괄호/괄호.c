#include <stdio.h>
#include <string.h>

int main() {
    int T, top, cnt;

    scanf("%d", &T);

    for(int i=0;i<T;i++) {
        char p[51];
        int stack[51] = {0};
        
        top = -1;
        cnt = 0;

        scanf("%s", p);

        for(int j=0;j<strlen(p);j++) {
            if(p[j]=='(') {
                stack[++top] = 1;
            } else {
                if(top==-1) {
                    cnt=1;
                    break;
                } else {
                    stack[top--] = 0;
                }
            }
        }

        if(cnt || stack[0]) printf("NO\n");
        else printf("YES\n");
    }




    return 0;
}