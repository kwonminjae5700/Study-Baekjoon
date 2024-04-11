#include <stdio.h>

int main() {
    int count=0;
    char word[101];

    scanf("%s", word);

    for(char En='a';En<='z';En++) {
        count=0;
        for(int i=0;word[i]!='\0';i++) {
            if(word[i]==En) {
                count++;
                printf("%d ", i);
                break;
            }
        }

        if(count==0)
            printf("-1 ");
    }

    return 0;
}