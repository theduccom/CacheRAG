#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

#define MAPSIZE 12
vector<string> mapdata(MAPSIZE);
int mapsize;
int dx[] = { 1, -1, 0, 0 };
int dy[] = { 0, 0, 1, -1 };

void dfs(int x, int y)
{
    mapdata[y][x] = '0';
    for (int i = 0; i < 4; i++) {
        int px = x + dx[i];
        int py = y + dy[i];
        if (px < 0 || px >= MAPSIZE || py < 0 || py >= MAPSIZE) continue;
        if (mapdata[py][px] == '0') continue;
        dfs(px, py);
    }
}

int main()
{
    while (1) {
        int ans = 0;
        for (int i = 0; i < MAPSIZE; i++) {
            cin >> mapdata[i];
            if (cin.eof()) { return 0; }
        }
        for (int i = 0; i < MAPSIZE; i++) {
            for (int j = 0; j < MAPSIZE; j++) {
                if (mapdata[i][j] == '0') continue;
                dfs(j, i);
                ans++;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}