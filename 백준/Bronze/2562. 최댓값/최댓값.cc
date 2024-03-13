#include <stdio.h>

int main(void) {
    int arr[9];
    int max_n, temp=0, line_n;;
    

    for(int i=0;i<9;i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &max_n);
    
    for(int i=0;i<9;i++) {
        if(arr[i]>temp) {
            temp=arr[i];
            line_n=i+1;
        }
    }
    printf("%d\n", temp);
    printf("%d", line_n);

}