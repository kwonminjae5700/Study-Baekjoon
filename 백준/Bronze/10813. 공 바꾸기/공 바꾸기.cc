#include <stdio.h>

int main(void) {
    int N, M; // N : 바구니의 총 개수, M : 공을 바꿀 횟수
    int i, j;
    int temp=0; // 바구니의 값을 서로 바꿔주기 위한 임시 변수 저장소

    scanf("%d %d", &N, &M);

    int basket[N]; // N개의 연속적으로 이뤄진 바구니

    for(int l=0;l<N;l++) { // 바구니의 번호와 공의 번호를 같게 만들어주는 코드
        basket[l]=l+1;
    }

    for(int l=0;l<M;l++) {
        scanf("%d %d", &i, &j);

        temp=basket[i-1];
        basket[i-1]=basket[j-1]; // i번 바구니와 j번 바구니의 공을 교환시켜주는 코드
        basket[j-1]=temp;
    }

    for(int l=0;l<N;l++) {
        printf("%d ", basket[l]);
    }
    
    
}