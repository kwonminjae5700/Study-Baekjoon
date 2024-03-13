#include <stdio.h>

int main(void) {
    int H, M, n_time, real_time;

    scanf("%d %d", &H, &M);
    scanf("%d", &n_time);

    real_time = M+n_time;
    
    if(M+n_time < 60) {
        printf("%d %d", H, M+n_time);
    } else if(M+n_time >= 60) {
        while(real_time >= 60) {
            real_time = real_time - 60;
            H++;
            if(H>=24) {
                H=0;
            }
        }
        printf("%d %d", H, real_time);
    }
}