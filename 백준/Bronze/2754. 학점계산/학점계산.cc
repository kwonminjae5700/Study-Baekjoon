#include <stdio.h>
int main(){

    char grade,grade2;
    scanf("%c",&grade);
    
    if(grade!='F'){
    scanf("%c",&grade2);
    }
    float g=0;
    if(grade=='A'){
        g=4.0;
    }
    if(grade=='B'){
        g=3.0;
    }
    if(grade=='C'){
        g=2.0;
    }
    if(grade=='D'){
        g=1.0;
    }
    if(grade2=='+'){
        g=g+0.3;
    }
    if(grade2=='-'){
        g=g-0.3;
    }
    printf("%.1f",g);

    return 0;
}