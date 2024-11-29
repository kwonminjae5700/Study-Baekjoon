#include <stdio.h>

int palindrome(int num) {
    int arr[10], idx=0;
    while(num) {
        arr[idx++] = num%10;
        num/=10;
    }

    int front=0, back=idx-1, count=0;

    for(int i=0;i<idx/2;i++) {
        if(arr[front++] == arr[back--]) count++;
    }

    if(count == idx/2) return 1;
    else return 0;
}

int main() {
    int N;

    scanf("%d", &N);
    int num[2000001]={0}, prime[200001], idx=0;

    for(int i=2;i<=2000001;i++) {
        for(int j=2;i*j<=2000001;j++) num[i*j] = 1;
    }

    for(int i=2;i<=2000001;i++) {
        if(!num[i] && i>=N) prime[idx++] = i;

    }

    if(N<=7) printf("%d", prime[0]);
    else {
        idx = 0;

        while(1) {
            if(palindrome(prime[idx])) {
                printf("%d ", prime[idx]);
                break;
            }

            idx++;
        }
    }

    return 0;
}