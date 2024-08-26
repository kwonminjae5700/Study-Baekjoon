#include <stdio.h>

int main() {
    int N, Q, num, l, x, s, idx=0;

    scanf("%d %d", &N, &Q); int arr[N];

    for(int i=0;i<N;i++) scanf("%d", &arr[i]);

    for(int i=0;i<Q;i++) {
        scanf("%d", &num);

        if(num == 1) {
            scanf("%d %d", &l, &x);

            arr[(idx+l-1)%N] += x;
        } else if(num == 2) {
            scanf("%d", &s);

            if(idx-s<0) idx = idx-s+N;
            else idx -= s;
        } else {
            scanf("%d", &s);

            idx = (idx+s)%N;
        }
    }

    for(int i=0;i<N;i++) printf("%d ", arr[(idx+i)%N]);


    return 0;
}