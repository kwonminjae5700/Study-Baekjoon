#include <stdio.h>

int main() {
    int N, idx, alphabet[26]={0}, count=0;

    scanf("%d", &N); char name[N][31];

    for(int i=0;i<N;i++) {
        scanf("%s", name[i]);
        idx = name[i][0] - 97;
        alphabet[idx]++;
    }

    for(int i=0;i<26;i++) {
        if(alphabet[i]>=5) {
            printf("%c", i+97);
            count=1;
        }
    }

    if(count==0) printf("PREDAJA");

    

    return 0;
}