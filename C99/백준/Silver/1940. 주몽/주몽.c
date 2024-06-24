#include <stdio.h>

int main() {
    int N, M, cnt=0;

    scanf("%d\n%d", &N, &M);

    int arr[N];

    for(int i=0;i<N;i++) {
        scanf("%d", &arr[i]);
    }

    for(int i=0;i<N-1;i++) {
        for(int j=i+1;j<N;j++) {
            if(arr[i]==M+1 || arr[j]==M+1) continue;
            else {
                if(arr[i]+arr[j]==M) {
                    cnt++;
                    arr[i] = M+1;
                    arr[j] = M+1;
                }
            }
        }
    }

    printf("%d", cnt);



    return 0;
}