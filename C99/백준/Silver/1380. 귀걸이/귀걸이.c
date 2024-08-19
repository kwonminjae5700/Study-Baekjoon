#include <stdio.h>

typedef struct {
    char name[60];
    int num;
}Earring;

int main() {
    int N, idx, scenario=0;
    char get;

    scanf("%d", &N);

    while(N) {
        scenario++;

        Earring E[N];

        for(int i=0;i<N;i++) {
            scanf(" %[^\n]", E[i].name);
            E[i].num = 0;
        }

        for(int i=0;i<N*2-1;i++) {
            scanf("%d %c", &idx, &get);

            E[idx-1].num++;
        }

        for(int i=0;i<N;i++) {
            if(E[i].num==1) printf("%d %s\n", scenario, E[i].name);
        }

        scanf("%d", &N);
    }


    return 0;
}