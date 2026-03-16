#include <stdio.h>

#define SIZE 12

void Erase(int map[SIZE][SIZE], int x, int y);

int main(){
    int map[SIZE][SIZE];
    char buf[SIZE+1];
    int count;
    
    while (scanf("%s",buf)!=EOF){
        // load map
        for (int j=0; j<SIZE;j++){
            map[0][j] = buf[j] - '0';
        }            
        for (int i=1; i<SIZE;i++){
            scanf("%s",buf);
            for (int j=0; j<SIZE;j++){
                map[i][j] = buf[j] - '0';
            }            
        }
        // count islands
        count=0;
        for (int i=0; i<SIZE;i++){
            for (int j=0; j<SIZE;j++){
                if (map[i][j]){
                    count++;
                    Erase(map, i, j);
                }
            }            
        }
        printf("%d\n",count);
    }
    
    return 0;
}

void Erase(int map[SIZE][SIZE], int x, int y){
    if (x<0 || x>=SIZE) return;
    if (y<0 || y>=SIZE) return;
    if (map[x][y]==0) return;
    map[x][y]=0;
    Erase(map, x-1, y);
    Erase(map, x+1, y);
    Erase(map, x, y-1);
    Erase(map, x, y+1);
    return;
}