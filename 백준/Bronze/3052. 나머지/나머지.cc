#include <stdio.h>

int main(void) {
    int N[10]; // 수 10개를 입력받을 연속적인 변수 생성
    int count=0, result=0;
    
    for(int i=0;i<10;i++) { // 수 10개를 입력받는 코드
        scanf("%d", &N[i]);

        N[i]=N[i]%42;
    }
    
    for(int i=0;i<10;i++) {

        count=0;
        for(int j=i+1;j<10;j++) {
            if(N[i]==N[j]) {
                count++;
            }
            
        }

        if(count==0) {
            result++;
        }
    }

    printf("%d", result);
}