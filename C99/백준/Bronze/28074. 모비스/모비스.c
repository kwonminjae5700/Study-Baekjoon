#include <stdio.h>
#include <string.h>

int main() {
    int alpa[28] = {0}, count=0, idx;
    char input[101];

    scanf("%s", input);

    for(int i=0;i<strlen(input);i++) {
        idx = input[i];
        
        alpa[idx-65]++;
        
    }

    if(alpa[12]>=1) count++;
    if(alpa[14]>=1) count++;
    if(alpa[1]>=1) count++;
    if(alpa[8]>=1) count++;
    if(alpa[18]>=1) count++;

    if(count==5) printf("YES");
    else printf("NO");


    return 0;
}