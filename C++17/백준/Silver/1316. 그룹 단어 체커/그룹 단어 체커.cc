#include <stdio.h>
#include <string.h>

int main() {
    int N, real_count=0;
    
    
    scanf("%d", &N);
    
    for(int i=1;i<=N;i++) {
        char word[101], check_word[101];
        int str_num=0, same_count = 0;
        scanf("%s", word);
        int before = word[0];
        for(int check=0;check<strlen(word);check++) {
            for(int j=0;j<str_num;j++) {
                if(word[check]==check_word[j]) same_count+=1;
            }
            if(before!=word[check]) {
                check_word[str_num] = before;
                str_num++;
            }
            before = word[check];
        }
        if(same_count==0){
            real_count++; 
        }
        
        
    }
    
    printf("%d", real_count);
    
    return 0;
}