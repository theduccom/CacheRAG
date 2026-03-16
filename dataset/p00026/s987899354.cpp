#include <cstdio>

int main(void)
{
    int x, y, size;
    int paper[10][10] = {0};
    int dx[] = { 0, 0,-1, 1,-1,-1, 1, 1, 0, 0,-2, 2};
	int dy[] = {-1, 1, 0, 0,-1, 1,-1, 1,-2, 2, 0, 0};
    int movex, movey;
    
    while (scanf("%d,%d,%d", &x, &y, &size) != EOF){
        paper[x][y]++;
        for (int i = 0; i < (size * 4); i++){
            movex = dx[i] + x;
            movey = dy[i] + y;
            if ((0 <= movex) && (movex <= 10) && (0 <= movey) && (movey <= 10)){
                paper[movex][movey]++;
            }
        }
    }
    int ans_white = 0;
    int ans_max = 0;
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            if (paper[i][j] == 0) ans_white++;
            if (ans_max < paper[i][j]) ans_max = paper[i][j];
        }
    }
    
    printf("%d\n%d\n", ans_white, ans_max);
    
    return (0);
}