#include <stdio.h>
#include <string.h>

int main() {
    int Queue[100001] = {0}, N, num, F=0, B=0;
    char command[20];

    scanf("%d", &N);

    for(int i=0;i<N;i++) {
        scanf("%s", command);

        if(!strcmp(command, "push")) {
            scanf("%d", &num);

            Queue[B++] = num;
        } else if(!strcmp(command, "pop")) {
            if(!Queue[F]) printf("-1\n");
            else {
                printf("%d\n", Queue[F++]);
                Queue[F-1] = 0;
            }
        } else if(!strcmp(command, "size")) {
            printf("%d\n", B-F);
        } else if(!strcmp(command, "empty")) {
            printf("%d\n", (B-F==0 ? 1:0));
        } else if(!strcmp(command, "front")) {
            if(!Queue[F]) printf("-1\n");
            else printf("%d\n", Queue[F]);
        } else if(!strcmp(command, "back")) {
            if(!Queue[B-1]) printf("-1\n");
            else printf("%d\n", Queue[B-1]);
        }
    }



    return 0;
}