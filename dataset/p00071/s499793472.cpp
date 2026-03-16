#include <iostream>
using namespace std;

char map[8][8];

void dfs(int x, int y)
{
    map[x][y] = '0';
    
    for(int i = 1; i <= 3; ++i){
        if(x + i < 8 && map[x + i][y] == '1') dfs(x + i, y);
        if(0 <= x - i && map[x - i][y] == '1') dfs(x - i, y);
        if(y + i < 8 && map[x][y + i] == '1') dfs(x, y + i);
        if(0 <= y - i && map[x][y - i] == '1') dfs(x, y - i);
    }
}

int main()
{
    int n, x, y;
    cin >> n;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < 8; ++j){
            for(int k = 0; k < 8; ++k){
                cin >> map[k][j];
            }
        }
        cin >> x >> y;
        x--; y--;
        
        dfs(x, y);
        cout << "Data " << i + 1 << ":" << endl;
        for(int j = 0; j < 8; ++j){
            for(int k = 0; k < 8; ++k){
                cout << map[k][j];
            }
            cout << endl;
        }
    }
}