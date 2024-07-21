#include <stdio.h>

int main() {
    char name[51], rank1, rank2;
    double credit, credit_sum=0, temp, total=0;

    for(int i=0;i<20;i++) {
        scanf("%s %lf %c%c", name, &credit, &rank1, &rank2);

        if(rank1 == 'P') continue;

        credit_sum += credit;

        if(rank1 == 'F') continue;
        else if(rank1 == 'A') temp=4;
        else if(rank1 == 'B') temp=3;
        else if(rank1 == 'C') temp=2;
        else if(rank1 == 'D') temp=1;

        if(rank2 == '+') temp+=0.5;

        total += (temp*credit);
    }

    printf("%lf", total/credit_sum);


    return 0;
}