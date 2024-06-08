#include <stdio.h>

typedef struct {
    char pokemon[21];
    int evolution;
    int candy;
} pokemon_info;

int main() {
    int N, max=-100, can_evolution, memory, sum=0;

    scanf("%d", &N);

    pokemon_info p[N];

    for(int i=0;i<N;i++) {
        scanf("%s", p[i].pokemon);
        scanf("%d %d", &p[i].evolution, &p[i].candy);

        can_evolution = 0;
        
        while(1) {
            if(p[i].candy/p[i].evolution == 0) break;
            
            can_evolution += p[i].candy/p[i].evolution;
            p[i].candy = p[i].candy%p[i].evolution + (p[i].candy/p[i].evolution)*2;
        }
        

        sum+=can_evolution;

        if(can_evolution > max) {
            max = can_evolution;
            memory = i;
        }
    }

    printf("%d\n%s", sum, p[memory].pokemon);

    

    return 0;
}