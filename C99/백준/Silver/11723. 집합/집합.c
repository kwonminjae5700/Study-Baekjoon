#include <stdio.h>
#include <string.h>

int main() {
    int M, x, S[21]={0};
    char command[50];

    scanf("%d", &M);

    for(int i=0;i<M;i++) {
        scanf("%s", command);

        if(!strcmp(command, "add")) {
            scanf("%d", &x);

            S[x] = 1;
        } else if(!strcmp(command, "remove")) {
            scanf("%d", &x);

            S[x] = 0;
        } else if(!strcmp(command, "check")) {
            scanf("%d", &x);

            if(S[x]) printf("1\n");
            else printf("0\n");
        } else if(!strcmp(command, "toggle")) {
            scanf("%d", &x);

            if(S[x]) S[x] = 0;
            else S[x] = 1;
        } else if(!strcmp(command, "all")) {
            for(int i=1;i<=20;i++) S[i] = 1;
        } else {
            for(int i=1;i<=20;i++) S[i] = 0;
        }
        
    }



    return 0;
}