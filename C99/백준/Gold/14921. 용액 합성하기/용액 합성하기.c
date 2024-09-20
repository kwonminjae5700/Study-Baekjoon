#include <stdio.h>

int abs(int n) {
    if(n<0) n*=-1;

    return n;
}

int main() {
    int N;

    scanf("%d", &N);

    int solution[N], start=0, end=N-1, sum=0, temp, before;

    for(int i=0;i<N;i++) scanf("%d", &solution[i]);

    sum = solution[start] + solution[end];
    temp = sum;
    before = sum;
    
    if(N<=2) printf("%d ", sum);
    else {
        while(1) {
            if(temp<0) {
                temp = solution[++start] + solution[end];
            } else {
                temp = solution[--end] + solution[start];
            }

            if(start == end) break;

            if(abs(temp) < abs(before)) {
                before = temp;                
                sum = temp;
            } else sum = temp;
        }

        printf("%d", before);
        
    }

    return 0;
}