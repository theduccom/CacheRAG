#include <cstdio>
using namespace std;

char field[8][12];

void bomb(int x, int y){
    field[x][y] = '0';
    for(int i = -3; i <= 3; i++){
        if(x + i >= 0 && x + i < 8 && field[x + i][y] == '1'){
            bomb(x + i, y);
        }
        if(y + i >= 0 && y + i < 8 && field[x][y + i] == '1'){
            bomb(x, y + i);
        }
    }
}

int main(){
    int N, X, Y;
    scanf("%d", &N);
    for(int n = 1; n <= N; n++){
        for(int i = 0; i < 8; i++){
            scanf(" %s", field[i]);
        }
        scanf("%d%d", &Y, &X);
        --X; --Y;
        bomb(X, Y);
        printf("Data %d:\n", n);
        for(int i = 0; i < 8; i++){
            printf("%s\n", field[i]);
        }
    }
    return 0;
}