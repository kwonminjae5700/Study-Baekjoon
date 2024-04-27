#include <stdio.h>

int main() {
    int N, temp, count=0;
    
    scanf("%d", &N);
    int new_num=N;
    
    while(1) {
        temp = new_num%10;
        new_num = new_num/10 + new_num%10;
        new_num = temp*10+new_num%10;
        count++;
        
        if(new_num==N) break;
    }
    
    printf("%d", count);
    
    return 0;
}