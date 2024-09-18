#include <stdio.h>

int main() {
    int N, num=1, top=-1, idx=-1, flag=0, b=0;

    scanf("%d", &N);

    int arr[1002], stack[1002];

    for(int i=0;i<N;i++) scanf("%d", &arr[i]);

    while(1) {
        if(num-1==N) {
            flag = 1;
            break;
        } else if(b) break;
        
        while(1) {
            if(arr[idx+1] == num) break;
            else if(idx+1>=N) {
                b=1;
                break;
            }
            
            if(b!=1) stack[++top] = arr[++idx];
        }
        stack[++top] = arr[++idx];

        while(1) {
            if(stack[top] == num && top>=0) {
                num++;
                top--;
            } else break;
            
            if(top<0) break;
        }
    }

    if(flag) printf("Nice");
    else printf("Sad");

    return 0;
}