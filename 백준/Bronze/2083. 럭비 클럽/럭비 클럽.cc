#include <stdio.h>

int main() {
    char name[11];
    int age, weight;

    while(1) {

        scanf("%s %d %d", name, &age, &weight);
        
        if(age+weight == 0)
            break;
        else {
            if(age>17 || weight>=80)
                printf("%s Senior\n", name);
            else
                printf("%s Junior\n", name);
        }
    }
    return 0;
}