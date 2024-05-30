#include <stdio.h>

int main() {
    int check[26] = {0}, max=-10000000, p, confirm;
    char word[1000001];
    
    scanf("%s", word);
    
    for(int i=0;word[i]!='\0';i++) {
        if(word[i]<96) check[word[i]-65]++;
        else if(word[i]<123) check[word[i]-97]++;
    }
    
    
    
     
    for(int i=0;i<26;i++) {
        if(check[i]!=0 && check[i]==max) confirm = check[i];
        else if(check[i]>max) {
            max=check[i];
            p = i;
        }
    }
        
    

        
    if(confirm == max) printf("?");
    else printf("%c", p+65);
    
    
    
    
    return 0;
}