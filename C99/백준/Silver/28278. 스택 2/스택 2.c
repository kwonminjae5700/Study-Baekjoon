#include <stdio.h>

int main() {
    int N, command, X, stack[1000001]={0}, top=-1;

    scanf("%d", &N);

    for(int i=0;i<N;i++) {
        scanf("%d", &command);

        if(command==1) {
            scanf("%d", &X);
            stack[++top] = X;
        } else if(command==2) {
            if(top>=0) {
                printf("%d\n", stack[top]);
                stack[top--] = 0;
            } else printf("-1\n");
        } else if(command==3) printf("%d\n", top+1);
        else if(command==4) {
            if(top>=0) printf("0\n");
            else printf("1\n");
        } else if(command==5) {
            if(top>=0) printf("%d\n", stack[top]);
            else printf("-1\n");
        }
    }

    

    

    return 0;
}