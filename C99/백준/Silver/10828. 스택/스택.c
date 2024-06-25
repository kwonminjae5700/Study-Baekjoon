#include <stdio.h>
#include <string.h>

int main() {
    int N, num, stack[10001], t=-1;

    scanf("%d", &N);

    for(int i=0;i<N;i++) {
        char command[50];
        
        scanf("%s", command);

        if(!strcmp(command, "push")) {
            scanf("%d", &num);

            stack[++t] = num;
        } else if(!strcmp(command, "pop")) {
            if(t==-1) printf("-1\n");
            else {
                printf("%d\n", stack[t--]);
            }
        } else if(!strcmp(command, "size")) {
            printf("%d\n", t+1);
        } else if(!strcmp(command, "empty")) {
            if(t==-1) printf("1\n");
            else printf("0\n");
        } else if(!strcmp(command, "top")) {
            if(t==-1) printf("-1\n");
            else {
                printf("%d\n", stack[t]);
            }
        }
    }




    return 0;
}