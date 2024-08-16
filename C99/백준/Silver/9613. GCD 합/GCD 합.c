#include <stdio.h>

long long int GCD(long long int n1, long long int n2) {
    long long int result;

    while(n1%n2!=0) {
        result = n1 % n2;
        n1 = n2;
        n2 = result;
    }

    return n2;
}

int main() {
    long long int T, N, sum;

    scanf("%lld", &T);

    for(int i=0;i<T;i++) {
        scanf("%lld", &N);

        long long int arr[N];
        sum = 0;

        for(int j=0;j<N;j++) scanf("%lld", &arr[j]);

        for(int j=0;j<N-1;j++) {
            for(int l=j+1;l<N;l++) {
                sum += GCD(arr[j], arr[l]);
            }
        }

        printf("%lld\n", sum);
    }



    return 0;
}