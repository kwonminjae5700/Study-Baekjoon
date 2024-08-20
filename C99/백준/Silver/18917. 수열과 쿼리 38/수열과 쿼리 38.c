#include <stdio.h>

int main() {
    unsigned long long int M, num, x, sum=0, xor=0;

    scanf("%d", &M);

    for(int i=0;i<M;i++) {
        scanf("%llu", &num);

        if(num==1) {
            scanf("%llu", &x);
            
            sum += x;
            xor ^= x;
        } else if(num==2) {
            scanf("%llu", &x);
            
            sum -= x;
            xor ^= x;
            
        } else if(num==3) {
            printf("%llu\n", sum);
        } else {
            printf("%llu\n", xor);
        }
    }
    


    return 0;
}