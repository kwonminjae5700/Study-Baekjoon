#include <stdio.h>

int main() {
    int N=1, Sum, Result=10;

    while(1) {
        
        scanf("%d", &N);
        
        Sum = 0;
        Result = N;
        
        while(Result/10!=0) {
            Sum = Sum + N%10;
            N/=10;

            if(N==0) {
                Result = Sum;
                Sum = 0;
                N = Result;
            }
        }

        if(N==0) {
            break;
        }

        printf("%d\n", Result);
        

    }
    return 0;
}