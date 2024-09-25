#include <stdio.h>

int field[51][51] = {0}, visited[51][51] = {0}, M, N, K;

int bug(int y, int x) {
    if(x < 0 || x >= M || y < 0 || y >= N) return 0;
    if(visited[y][x] || !field[y][x]) return 0;

    visited[y][x] = 1;

    bug(y-1, x);
    bug(y+1, x);
    bug(y, x-1);
    bug(y, x+1);

    return 1;
}

int main() {
    int T, x, y, count;

    scanf("%d", &T);

    for(int t=0;t<T;t++) {
        for(int i=0;i<N;i++) for(int j=0;j<M;j++) {
            field[i][j] = 0;
            visited[i][j] = 0;
        }
        count = 0;
        
        scanf("%d %d %d", &M, &N, &K);

        for(int i=0;i<K;i++) {
            scanf("%d %d", &x, &y);
    
            field[y][x] = 1;
        }
    
        for(int i=0;i<N;i++) {
            for(int j=0;j<M;j++) {
                if(!visited[i][j] && field[i][j]) {
                    bug(i, j);
                    count++;
                }
            }
        }

        printf("%d\n", count);
    }


    return 0;
}