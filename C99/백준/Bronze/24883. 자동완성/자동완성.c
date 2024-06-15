#include <stdio.h>

int main() {
    char word;

    scanf("%c", &word);

    if(word == 'N' || word == 'n') printf("Naver D2");
    else printf("Naver Whale");


    return 0;
}