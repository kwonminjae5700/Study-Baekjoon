#include <stdio.h>

int REV(int n) {
    int result=0, digit=1, temp=n;
    
    while(temp >= 10) { // 자릿수를 확인하는 코드
        temp/=10;
        digit++;
    }
    
    int mul[4]={1, 1, 1, 1}, index=0;
    
    for(int i=digit-1;i>0;i--) {
        for(int j=i;j>0;j--) {
           mul[index]*=10; 
        }
        
        index++;
    }
    
    temp=n;
    
    for(int i=0;i<digit;i++) {
        result += (temp%10)*mul[i];
        temp/=10;
    }
    
    return result;
}

int main() {
    int X, Y;
    
    scanf("%d %d", &X, &Y);
    
    X = REV(X);
    Y = REV(Y);
    
    int sum = X+Y;
    
    printf("%d", REV(sum));
    
    return 0;
}