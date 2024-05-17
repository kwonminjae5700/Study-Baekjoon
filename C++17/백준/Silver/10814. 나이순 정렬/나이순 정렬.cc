#include <stdio.h>
#include <stdlib.h>

int static compare (const void* first, const void* second)
{
    if (*(int*)first > *(int*)second)
        return 1;
    else if (*(int*)first < *(int*)second)
        return -1;
    else
        return 0;
}

struct Member {
    int age;
    char name[101];
};
typedef struct Member member;

int main() {
    member m[100000];
    int N;
    
    scanf("%d", &N);
    
    for(int i=0;i<N;i++) {
        scanf("%d %s", &m[i].age, m[i].name);
    }

    qsort(m, N, sizeof(member), compare);
    
    for(int i=0;i<N;i++) printf("%d %s\n", m[i].age, m[i].name);
    
    return 0;
}