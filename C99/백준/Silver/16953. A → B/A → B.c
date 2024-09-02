#include <stdio.h>

int main() {
    int A, B, cnt=1, flag=0;

    scanf("%d %d", &A, &B);

    while(1) {
        if(A==B) break;
        else if(B<A) {
            flag = 1;
            break;
        }
        else if(!(B%2)) {
            B/=2;
            cnt++;
        } else if(B%10==1) {
            B/=10;
            cnt++;
        } else {
            flag = 1;
            break;
        }
    }

    if(flag) printf("-1");
    else printf("%d", cnt);




    return 0;
}