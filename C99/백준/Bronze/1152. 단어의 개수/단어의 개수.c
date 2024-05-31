#include <stdio.h>
#include <string.h>

int main() {
    int len, space = 0;
    char word[1000001];

    scanf("%[^\n]", word);

    len = strlen(word); 
    if(word[0] != ' ' && word[0]!='\0') space++;
    if(word[len-1] == ' ') space--;

    for(int i = 0; i < len; i++) { 
        if(word[i] == ' ') space++;
    }

    printf("%d", space);

    return 0;
}