#include <stdio.h>

int main() {
    int N, day=0, hour=-8;

    scanf("%d", &N); int time[N];

    for(int i=0;i<N;i++) {
        scanf("%d", &time[i]);

        day+=time[i];
        hour+=8;
    }

    printf("%d %d", (day+hour)/24, (hour+day)%24);


    return 0;
}