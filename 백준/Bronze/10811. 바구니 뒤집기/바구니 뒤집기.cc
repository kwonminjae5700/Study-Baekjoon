#include <stdio.h>

int main(void) {
    int N, M; // N : 바구니 총 개수, M : 바구니 순서를 역순으로 만들 횟수

    scanf("%d %d", &N, &M);
    
    int basket[N];
    int i, j, temp=0;

    for(int l=0;l<N;l++) { // 바구니의 숫자를 번호에 맞게 초기화 시키는 코드
        basket[l]=l+1;
    }
    

    for(int l=0;l<M;l++) {
        scanf("%d %d", &i, &j);

        int reverse = j-i;
        reverse+=1;
        reverse = reverse/2;

        int count_i=i-1;
        int count_j=j-1;
        
        for(int l=0;l<reverse;l++) {
            temp = basket[count_i];
            basket[count_i] = basket[count_j];
            basket[count_j] = temp;

            count_i++;
            count_j--;
        }
    }

    for(int l=0;l<N;l++) {
        printf("%d ", basket[l]);
    }
}