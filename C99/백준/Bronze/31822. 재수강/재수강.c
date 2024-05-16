#include <stdio.h>
#include <string.h>

int main() {
    char subject[100], Re[100];
    int N, count=0,flag;
    
    scanf("%s", subject);
    scanf("%d", &N);
    
    for(int i=0;i<N;i++) {
        scanf("%s", Re);
        flag = 1;
        for(int j = 0;j<5;j++){
            if(Re[j] != subject[j]){
                flag = 0;
            }
        }
        if(flag == 1) count++;
    }
    
    printf("%d", count);
    
    return 0;
}