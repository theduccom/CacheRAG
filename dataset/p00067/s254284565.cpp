#include <cstdio>
using namespace std;

char map[16][16];

void island(int x, int y){
    int v[4][2] = {{1,0}, {0,1}, {-1,0}, {0, -1}};
    map[x][y] = '0';
    for(int i = 0; i < 4; i++){
        int xx = x + v[i][0], yy = y + v[i][1];
        if( 0 <= xx && xx < 12 && 0 <= yy && yy < 12 && map[xx][yy] == '1'){
            island(xx, yy);
        }
    }
}

int main(){
    while( true ){
        if( scanf("%s", map[0]) == EOF ) break;
        for(int i = 1; i < 12; i++){
            scanf("%s", map[i]);
        }
        int count = 0;
        for(int i = 0; i < 12; i++){
            for(int j = 0; j < 12; j++){
                if( map[i][j] == '1' ){
                    count++;
                    island(i, j);
                }
            }
        }
        printf("%d\n", count);
    }
    return 0;
}