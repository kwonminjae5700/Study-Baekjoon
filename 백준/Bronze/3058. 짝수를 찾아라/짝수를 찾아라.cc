#include <stdio.h>

int main() {
    int T, sum=0, min=101;

    scanf("%d", &T);

    int arr[7];

    for(int i=0;i<T;i++) {
        for(int i=0;i<7;i++) {
            scanf("%d", &arr[i]);
            if(arr[i]%2==0) {
                sum+=arr[i];
                if(arr[i]<=min)
                    min=arr[i];
            }

        }

        printf("%d %d\n", sum, min);

        sum=0;
        min=101;
    }
    return 0;
}