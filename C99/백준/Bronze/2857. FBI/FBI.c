#include <stdio.h>
#include <string.h>

int main() {
    int streak, idx, ok=0;
    char name[10], FBI[3] = {'F', 'B', 'I'};

    for(int i=0;i<5;i++) {
        scanf("%s", name);

        streak=0;
        idx=0;

        for(int j=0;j<=strlen(name);j++) {
            if(streak==3) {
                printf("%d ", i+1);
                ok=1;
                break;
            }
            else {
                if(FBI[idx] == name[j]) {
                    idx++;
                    streak++;
                } else {
                    idx=0;
                    streak=0;
                }
            }
        }
    }

    if(!ok) printf("HE GOT AWAY!");
}