#include <stdio.h>
#include <string.h>

int main() {
    char voice[1000], docter_want[1000];
    
    scanf("%s", voice);
    scanf("%s", docter_want);
    
    if(strlen(voice)<strlen(docter_want)) {
        printf("no");
    } else
        printf("go");
    return 0;
}