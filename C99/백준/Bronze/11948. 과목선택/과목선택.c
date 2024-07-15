#include <stdio.h>

int main() {
    int subject[6], min=0, sum=0;

    for(int i=0;i<6;i++) {
        scanf("%d", &subject[i]);

        if(i<=3 && subject[i]<subject[min]) min = i;
        
    }

    subject[min] = 0;

    for(int i=0;i<=3;i++) sum+=subject[i];

    printf("%d", sum+(subject[4]>subject[5] ? subject[4]:subject[5]));
    

    


    return 0;
}