#include <stdio.h>
#include <string.h>

int main() {
    char room[1000001];
    int piece[10] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}, cnt=1, flag=0, temp;

    scanf("%s", room);

    for(int i=0;i<strlen(room);i++) {
        temp = room[i] - 48;
        flag = 0;

        if(!piece[temp]) {
            
            if(temp == 6 || temp == 9) {
                if(piece[9] == piece[6]) piece[temp]--;
                else {
                    if(piece[9] > piece[6]) piece[9]--;
                    else piece[6]--;

                    goto G;
                }
            } else piece[temp]--;

            flag = 1;
        } else piece[temp]--;

        G:

        if(flag) {
            for(int i=0;i<10;i++) piece[i]++;
            cnt++;
        }
    }

    printf("%d", cnt);


    return 0;
}