#include <stdio.h>

int d(int num) {
    int count=0;

    while(num/10!=0) {
        num/=10;
        count++;
    }
    
    return count;
}


int main() {
    int num[2], C, string[10] = {0}, digit[3], idx=0, multi[2] = {1, 1};
    int count=0;

    scanf("%d %d %d", &num[0], &num[1], &C);

    int A= num[0], B = num[1];

    digit[0] = d(num[0]);
    digit[1] = d(num[1]);

    for(int i=0;i<2;i++) {
        for(int j=0;j<digit[i];j++) {
            multi[i]*=10;
        }
    }

    for(int i=0;i<2;i++) {
        for(int j=digit[i]+1;j>0;j--) {
            string[idx] = num[i]/multi[i];
            num[i]-=(num[i]/multi[i])*multi[i];
            multi[i]/=10;

            idx++;
            count++;
        } 
    }

    int sum=0;

    for(int i=0;i<count;i++) {
        sum+=string[i];
        sum*=10;
    }

    printf("%d\n%d", A+B-C, sum/10-C);


    return 0;
}