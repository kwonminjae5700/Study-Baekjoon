#include <stdio.h>
#include <string.h>

int main() {
    char word[101], alphabet[26]={0};

    scanf("%s", word);

    for(int i=0;i<strlen(word);i++) {
        alphabet[word[i]-97]++;
    }

    for(int i=0;i<26;i++) printf("%d ", alphabet[i]);
}