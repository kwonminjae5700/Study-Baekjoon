#include <stdio.h>

int main() {
    int N;
    char word[1001];

    scanf("%d", &N);

    for(int i=0;i<N;i++) {
        scanf("%s", word);

        printf("%c", word[0]);
        int j=0;
        while(1) {
            if(word[j]=='\0') {
                printf("%c\n", word[j-1]);
                break;
            }

            j++;
        }
        
    }

    
    return 0;
}