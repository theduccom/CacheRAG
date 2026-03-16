#include <cstdio>

#define MAX (105)

void search(int x, int y);

int h, w;
char data[MAX][MAX];
char flag[MAX][MAX];

int main(void)
{
    int i, j;
    
    while (1){
        scanf("%d %d", &h, &w);
        if (h == 0 && w == 0) break;
        for (i = 0; i < MAX; i++){
            for (j = 0; j < MAX; j++){
                data[i][j] = '\0';
                flag[i][j] = '0';
            }
        }
        for (i = 0; i < h; i++){
            scanf("%s", data[i]);
        }
        search(0, 0);
    }
    
    return (0);
}

void search(int x, int y)
{
    if (flag[x][y] == '1'){
        printf("LOOP\n");
        return;
    }
    if (data[x][y] == '.'){
        printf("%d %d\n", y, x);
        return;
    }
    if (data[x][y] == '>'){
        flag[x][y] = '1';
        search(x, y + 1);
    }
    else if (data[x][y] == '<'){
        flag[x][y] = '1';
        search(x, y - 1);
    }
    else if (data[x][y] == '^'){
        flag[x][y] = '1';
        search(x - 1, y);
    }
    else if (data[x][y] == 'v'){
        flag[x][y] = '1';
        search(x + 1, y);
    }
    
}