#include <stdio.h>

int main(void) {
    char word[101];
    int finish_word = 0;

    scanf("%s", word);
    
    for(int i=0;i<101;i++) {
        if(word[i]=='\0') {
            finish_word = i;
            break;
        }
    }

    printf("%d", finish_word);
}