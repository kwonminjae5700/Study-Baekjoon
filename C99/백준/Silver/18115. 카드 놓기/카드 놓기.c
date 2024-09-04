#include <stdio.h>

int main() {
    int N, front=0, middle, back, x, card[1000001]={0};

    scanf("%d", &N);

    middle = front+1;
    back = N-1;

    for(int i=N;i>=1;i--) {
        scanf("%d", &x);

        if(x==1) {
            card[front++] = i;
            middle++;
        } else if(x==2) {
            card[middle++] = i;
        } else {
            card[back--] = i;
        }

        while(card[front]) front++;
        while(card[middle]) middle++;
    }

    for(int i=0;i<N;i++) printf("%d ", card[i]);
    
    return 0;
}