#include <stdio.h>

int main(void) {
    int N, M; // N : 바구니의 총 개수, M : 공을 넣을 횟수
    int i, j, k; 
    
    scanf("%d %d", &N, &M);

    int basket[N]; // N개의 연속적으로 이뤄진 바구니
    
    for(int l=0;l<N;l++) { // 처음 바구니에 들어있는 공의 개수를 0으로 초기화 시키는 코드
        basket[l] = 0;
    }

    for(int l=0;l<M;l++) {
        scanf("%d %d %d", &i, &j, &k); // i번 바구니부터 j번 바구니까지 k번 번호가 적힌 공을 넣는다.

        for(i;i<=j;i++) {
            basket[i-1] = k;
        }
    }
    
    for(int l=0;l<N;l++) { // 바구니에 들어있는 공의 개수를 출력하는 코드
        printf("%d ", basket[l]);
    }
    
}