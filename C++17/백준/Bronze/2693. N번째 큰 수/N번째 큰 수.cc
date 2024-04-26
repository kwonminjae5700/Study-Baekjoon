#include <stdio.h>

int main() {
    int T, arr[11], temp;
    scanf("%d", &T);
    
    for(int i=1;i<=T;i++) {
        for(int reset=0;reset<10;reset++) {
            scanf("%d", &arr[reset]);
        }
        
        for(int l=0;l<10;l++) {
            for(int j=0;j<10;j++) {
                if(arr[l]>arr[j]) {
                    temp = arr[l];
                    arr[l] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        
        printf("%d\n", arr[2]);
    }
    
    
    
    
    return 0;
}