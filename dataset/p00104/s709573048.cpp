#include <stdio.h>
#define U 1
#define D 2
#define R 3
#define L 4
#define MAX 100

int main(void){
    int dx[L+1] = {0,0,0,1,-1};
    int dy[L+1] = {0,-1,1,0,0};
    int pnl[MAX][MAX];
    int visited[MAX][MAX];
    char buf[MAX+1];
    int h,w,x,y,dir;
    
    while (scanf("%d %d",&h, &w)){
        if (h==0 && w==0) break;
        // load
        for (int i=0; i<h; i++){
            scanf("%s", buf);
            for (int j=0; j<w; j++){
                visited[j][i] = pnl[j][i] = 0;
                switch (buf[j]){
                    case '^' : pnl[j][i]=U; break;
                    case 'v' : pnl[j][i]=D; break;
                    case '>' : pnl[j][i]=R; break;
                    case '<' : pnl[j][i]=L; break;
                }
            }
        }
        // move
        x = y = 0;
        while(pnl[x][y] && !visited[x][y]){
            visited[x][y]=1;
            dir = pnl[x][y];
            x += dx[dir];
            y += dy[dir];
        }
        if (pnl[x][y]){
            printf("LOOP\n");
        } else {
            printf("%d %d\n", x,y);
        }
    }
    
    return 0;
}