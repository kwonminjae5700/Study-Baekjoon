#include <stdio.h>

int main() {
    int N, T_shirt[6], T, P, T_cnt=0;

    scanf("%d", &N);

    for(int i=0;i<6;i++) scanf("%d", &T_shirt[i]);
    
    scanf("%d %d", &T, &P);

    for(int i=0;i<6;i++) {
        if(T_shirt[i]%T!=0) {
            T_cnt++;
            T_cnt += T_shirt[i]/T;
        } else if(T_shirt[i]%T==0) T_cnt += T_shirt[i]/T;
    }

    printf("%d\n%d %d", T_cnt, N/P, N%P);
    


    return 0;
}