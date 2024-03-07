#include <stdio.h>

int main() {
    char word[1000];
    int i;

    scanf("%s", word);
    scanf("%d", &i);
    
    printf("%c", word[i-1]);
    
}