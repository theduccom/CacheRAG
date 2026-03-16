#include <iostream>
#include <algorithm>
#include <string>
#include <cstdio>
#include <cmath>

using namespace std;

char field[16][16];

void dfs(int x, int y)
{
    field[x][y] = '0';
    if(field[x-1][y]=='1' && (x-1)>=0)
        dfs(x-1, y);
    if(field[x+1][y]=='1')
        dfs(x+1, y);
    if(field[x][y-1]=='1' && (y-1)>=0)
        dfs(x, y-1);
    if(field[x][y+1]=='1')
        dfs(x, y+1);

    return ;
}

int main(void)
{
    while(cin >> field[0]) {
        for(int i=1; i<12; i++)
            cin >> field[i];

        int cnt = 0;
        for(int i=0; i<12; i++) {
            for(int j=0; j<12; j++) {
                if(field[i][j] == '1') {
                    dfs(i, j);
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}