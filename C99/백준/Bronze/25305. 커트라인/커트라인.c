#include <stdio.h>

int main() {
    int N, K, idx, temp;

    scanf("%d %d", &N, &K); int score[N];

    for(int i=0;i<N;i++) scanf("%d", &score[i]);

    for(int i=0;i<N-1;i++) {
        idx = i;
        for(int j=i;j<N;j++) {
            if(score[idx] < score[j]) idx = j;
        }

        temp = score[idx];
        score[idx] = score[i];
        score[i] = temp;
        
    }

    printf("%d", score[K-1]);

    

    return 0;
}