#include <stdio.h>

int main(void) {
    int N, count=0; // N : 시험 본 과목의 개수
    double M=-1.0, sum; // M : 자신의 점수 중 가장 높은 점수

    scanf("%d", &N);
    
    double score[N];

    for(int i=0;i<N;i++) {
        count++;
        scanf("%lf", &score[i]);

        if(score[i]>=M) {
            M=score[i];
        }
    }

    for(int i=0;i<N;i++) {
        sum = sum + (score[i]/M*100);
    }

    double avg = sum/(double)count;

    printf("%lf", avg);
    
}