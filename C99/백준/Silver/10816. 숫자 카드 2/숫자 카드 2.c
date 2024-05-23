#include <stdio.h>

int main() {
    int N, M, num;
    int plus[10000001]={0, }, minus[10000001]={0, };
    
    scanf("%d", &N); 
    
    for(int i=0;i<N;i++) {
        scanf("%d", &num);
        
        if(num>=0) plus[num]++;
        else if(num<0) minus[num*-1]++;
        
    }
    
    scanf("%d", &M);
    
    for(int i=0;i<M;i++) {
        scanf("%d", &num);
        
        if(num>=0) printf("%d ", plus[num]);
        else if(num<0) printf("%d ", minus[num*-1]);
    }
    
    
    return 0;
}