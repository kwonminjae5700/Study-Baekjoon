#include <stdio.h>

int main() {
    int alphabet[26] = {3, 2, 1, 2, 3, 3, 2, 3, 3, 2, 2, 1, 2, 2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1};
    char A[2001], B[2001];

    scanf("%s %s", A, B);

    int word[5000] = {0}, idx=0, temp=0, cnt;

    for(int i=0;A[i];i++) {
        word[idx++] = alphabet[A[i]-65];
        word[idx++] = alphabet[B[i]-65];
    }

    cnt = idx;
    idx = 0;
    
    while(cnt != 2) {
        idx = 0;
        temp = 0;
        
        for(int i=0;i<cnt-1;i++) {
            word[i] = (word[idx] + word[idx+1])%10;
            temp++;
            idx+=1;
        }

        cnt = temp;
    }

    for(int i=0;i<2;i++) printf("%d", word[i]);

    


    return 0;
}