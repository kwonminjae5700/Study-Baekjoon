#include <stdio.h>

int main() {
    int n1, n2, n3;

    scanf("%d %d %d", &n1, &n2, &n3);

    if(n1+n2+n3 != 180)
        printf("Error");
    else {
        if(n1==n2 && n2==n3)
            printf("Equilateral");
        else if(n1==n2 || n1==n3)
            printf("Isosceles");
        else if(n2==n3)
            printf("Isosceles");
        else {
            printf("Scalene");
        }
    }
    return 0;
}