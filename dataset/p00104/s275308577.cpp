#include <bits/stdc++.h>
#define MAX_L 101
using namespace std;

int w, h;
int x = 0, y = 0;
char table[MAX_L+1][MAX_L+1];
bool used[MAX_L+1][MAX_L+1];

void forward(char operate) {
    
    switch(operate) {
            case '^':
            y--; break;
            case 'v':
            y++; break;
            case '>':
            x++; break;
            case '<':
            x--; break;
        default: break;
    }
}

void solve() {
    x = 0; y = 0; memset(used, false, sizeof(used));
    while(table[y][x] != '.' && !used[y][x]) {
        //printf("%d %d\n", x, y);
        used[y][x] = true;
        forward(table[y][x]);
    }
    if(used[y][x])
    {
        puts("LOOP");
    } else {
        printf("%d %d\n", x, y);
    }
}

int main(void) {
    while(cin >> h >> w, w|h) {
        for(int r = 0; r < h; r++) {
            for(int c = 0; c < w; c++) {
                cin >> table[r][c];
            }
        }
        solve();
    }
    return(0);
}