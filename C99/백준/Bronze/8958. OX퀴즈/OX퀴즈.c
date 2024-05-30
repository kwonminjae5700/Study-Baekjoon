#include <stdio.h>

int main() {
    int N;
    
    scanf("%d", &N);
    
    for(int i=0;i<N;i++) {
        int sum=0, con=1;
        char OX[81];
        
        scanf("%s", OX);
        
        for(int j=0;OX[j]!='\0';j++) {
            if(OX[j]=='O') {
                sum+=con;
                con++;
            } else {
                con=1;
            }
        }
        
        printf("%d\n", sum);
    }
    
    
    return 0;
}