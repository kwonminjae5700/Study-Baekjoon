#include <stdio.h>

int main() {
    int N, K, count=0, p=0, sum=0, comma=0;
    
    scanf("%d %d", &N, &K);
    
    int Josephus[N];
    
    for(int i=0;i<N;i++) Josephus[i] = i+1; // 요세푸스의 숫자를 초기화
    
    printf("<");
    while(1) {
        count++;
        p++;
        
        
        for(int i=0;i<N;i++) {
            sum+=Josephus[i];
        }
        
        if(sum==0) break;
        
        if(Josephus[(count-1)%N]==0) p--;
        
        if(p==K) {
            comma++;
            
            if(comma!=N) printf("%d, ", Josephus[(count-1)%N]);
            else if(comma==N) printf("%d>", Josephus[(count-1)%N]);
            Josephus[(count-1)%N] = 0;
            p=0;
            
            
        }
        
        sum=0;
        
    }

    
    
    return 0;
}