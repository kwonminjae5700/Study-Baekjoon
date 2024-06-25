#include <stdio.h>

int main() {
    int N, num, stack[100001], top=-1;

    scanf("%d", &N);

    for(int i=0;i<N;i++) {
        scanf("%d", &num);

        if(num) {
            stack[++top] = num;
        } else {
            top--;
        }
    }

    if(top==-1) printf("0");
    else {
        int sum=0;

        for(int i=0;i<=top;i++) sum+=stack[i];

        printf("%d", sum);
    }




    return 0;
}