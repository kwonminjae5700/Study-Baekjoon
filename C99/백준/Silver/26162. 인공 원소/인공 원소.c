#include <stdio.h>

int main() {
    int N, num, idx=0, arr[200] = {0}, decimal[200] = {0}, flag;

    scanf("%d", &N);

    for(int i=2;i<=118;i++) arr[i] = i;
 
    for(int i=2;i<=118;i++) {
        if(!arr[i]) continue;

        for(int j=2;i*j<=118;j++) {
            arr[i*j] = 0;
        }
    }

    for(int i=2;i<=118;i++) {
        if(arr[i]) decimal[idx++] = arr[i];
    }

    for(int i=0;i<N;i++) {
        scanf("%d", &num);
        flag = 0;

        if(num%2) {
            for(int j=1;2+decimal[j]<=num && decimal[j];j++) {
                if(decimal[j]+2 == num) {
                    flag = 1;
                    goto P;
                }
            }
        } else {
            for(int j=0;decimal[j]<=num && decimal[j];j++) {
                for(int l=j;decimal[j]+decimal[l]<=num && decimal[l];l++) {
                    if(decimal[j]+decimal[l] == num) {
                        flag = 1;
                        goto P;
                    }
                }
            }
        }

        P:

        if(flag) printf("Yes\n");
        else printf("No\n");
    }


    return 0;
}